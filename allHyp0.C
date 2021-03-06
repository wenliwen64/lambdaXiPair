//xianglei's analysis macro: analyze the picoDST generated by StV0Maker. 

//a handy routine to chain some block files listed in filelist.

//#include"TString"
//#include"TFile.h"
#include "TLorentzVector.h"
#include "TVector3.h"
//#include "StRefMultCorr.h"
TChain* ChainThem(char* filelist, char* treename, int nlist = 0, int block = 100);
const int kGroup   = 1;
const int kCentBin = 9;
//const int kCentBin = 1;
const int kPtBin = 16;
#define kZBin  6
#define kEvent 1
#define totalv0 50 
Double_t grpbd[kGroup+1]={11000000,12000000};//8340014.5,9008200.,9020100.,9060000.};//from H. Masui
Float_t centbd[kGroup][kCentBin+1]={{10,21,41,72,118,182,266,375,441,700}};//{0,7,15,185.};,,{0,6.5,10.5,200.}}; //from H. Masui
//Float_t centbd[kGroup][kCentBin+1]={{10,700}};//{0,7,15,185.};,,{0,6.5,10.5,200.}}; //from H. Masui
Float_t ptbd[kPtBin+1]={0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.5,2.5,3.0,3.5,4.5,6.0};

Float_t s_bhigh[kPtBin+1]={0.789,0.893,0.936,0.947,0.942,0.934,0.933,0.939,0.943,0.952,0.951,0.96,0.941,0.89,0,0,0};
Float_t s_blow[kPtBin+1]={0.,0.639,0.69,0.75,0.749,0.775,0.786,0.817,0.849,0.881,0.891,0.899,0.84,0.0,0,0,0};

Float_t zbin[kGroup][kZBin+1]={{-40,-30,-15,0,15,30,40}};
//Float_t zbin[kGroup][kZBin+1]={{-30,-15,0,15,30}};

Int_t getCentBin(Int_t nrefmult);
Int_t getPtBin(Float_t pt);
Int_t getZbin(Float_t Zvert);

//const int kEvent = 15;
//const int totalv0=30;
struct Lm_mixed{
  
  
  Int_t dau1_id;
  Int_t dau2_id;
  Int_t bach_id;
  
  Double_t Px;
  Double_t Py;
  Double_t Pz;
  
  Double_t lax;
  Double_t lay;
  Double_t laz;
  
  Double_t p_px;
  Double_t p_py;
  Double_t p_pz;
  
  Double_t pi_px;
  Double_t pi_py;
  Double_t pi_pz;
  
  Double_t PVx;
  Double_t PVy;
  Double_t PVz;
  
  Double_t mass;
  //Int_t ZBin;
  Int_t CentBin;
  Int_t totalv0;
  
}lm [kZBin][kEvent][totalv0],xi[kZBin][kEvent][totalv0];


void allHyp0(int nlist,int block){
  
  //gStyle->SetPalette(1);
  //gROOT->SetStyle("Plain");
  //firstly use the TTree::MakeClass to generate a handy wrapper class.
  //modify it (the array size) and load it here
  gROOT->LoadMacro("v0dst.C+");
  //gROOT->LoadMacro("StRefMultCorr.cxx+");
  //StRefMultCorr* refmultcorr = new StRefMultCorr();

  cout<<"load .C OK"<<endl; 
  TChain * t = ChainThem("all.list","V0PicoDst",nlist,block);
  if(!t){ cout<<"ERROR: no files are added to the chain!"<<endl; return; }
  
  v0dst v0dst(t);
  
  char *Dir="output_trgsplt/";
  char *Name="hyp_";
  char test1[100]; 
  sprintf(test1,"%s%s%d.root",Dir,Name,nlist);
  TFile ohm(test1,"recreate");
  
  
  Float_t pdgmass = 1.115684;
  Float_t pdgmass_xi = 1.320;
  Float_t masswidth = 0.07+0.01;
  cout<<"to define histogram"<<endl;
  // Lm_mixed lm [kZBin][kEvent][totalv0];  
 
  TH1F *hrefmult = new TH1F("hrefmult","reference multiplicity",100,0,700);
  
  TH1F *hvz = new TH1F("hvz","vertex z position",200,-50,50);
  
  TH1F *hevtZbin =  new TH1F("hevtZbin","",5,0,5);
  TH1F *hevtcentbin =  new TH1F("hevtcentbin","",10,0,10);
  TH1F * hIm2lm[kCentBin+1];  
  TH2F *hrefmultbbc = new TH2F("hrefmultbbc","",200,0,700,500,0,30000);
  TH2F *hdotn1n2 = new TH2F("hdotn1n2","",50,-1.1,1.1,30,0,30);
  TH1F * hQ[kCentBin+1];

  cout<<"histograms loop start"<<endl; 
  

  //histogram for cent bin and pt bin
  TH1D * hmGroup = new TH1D("hmGroup","Run Group finder",kGroup,grpbd);
  TH1F * hmCent[kGroup];
  
  TH1F * NLambda[kCentBin+1];
  TH1F * NXi[kCentBin+1];
  TH1F * hmass[kCentBin+1];
  for(Int_t i=0;i<kCentBin;i++){
    char *hName0="hmCent";
    char *hName1="hQ";
    char hName[200];
    char hName2[200];
    char *hTitle0="Centrality";    
    char hTitle[200];
    sprintf(hTitle,"%s%d",hTitle0,i);
    sprintf(hName,"%sNLm%d",hName0,i);
    NLambda[i] = new TH1F(hName,hTitle,20,0,20);
   
    sprintf(hName,"%sNXi%d",hName0,i);
    NXi[i] = new TH1F(hName,hTitle,10,0,10);
    
       
    sprintf(hName2,"%s_Rebin%d",hName1,i);
    hQ[i] =  new TH1F(hName2,hTitle,800,0,4);
    
   
    sprintf(hName,"%smass%d",hName0,i);
    hmass[i] =  new TH1F(hName,hTitle,200,1.05,1.5);
    
    sprintf(hName2,"%s2lambda%d",hName1,i);
    hIm2lm[i] =  new TH1F(hName2,hTitle,1200,2,8);

  
    
  }
  
  for(Int_t i=0;i<kGroup;i++){
    
    char *hName0="hmCent";
    
    char hName[100];
    sprintf(hName,"%s%d",hName0,i);
    
    char *hTitle0="Centrality bin finder for group";
    
    char hTitle[100];
    sprintf(hTitle,"%s%d",hTitle0,i);
    hmCent[i] = new TH1F(hName,hTitle,kCentBin,centbd[i]);
  }
  //event loop (copy from wrapper class' Loop method
  Long64_t nentries = t->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  Int_t zvert = -1;
  Int_t evt =0;
  Int_t counter =0;
  Int_t counterxi =0;
  Int_t zevt1 =0;
  Int_t zevt2 =0;
  Int_t zevt3 =0;
  Int_t zevt4 =0;
  Int_t zevt5 =0;
  Int_t zevt6 =0;
  TCutG *cutg = new TCutG("CUTG",7);
  //cutg->SetVarX("");
  //cutg->SetVarY("");
  //cutg->SetTitle("Graph");
  //cutg->SetFillColor(1);
  cutg->SetPoint(0,50.56706,131.8357);
  cutg->SetPoint(1,697.7564,16757.81);
  cutg->SetPoint(2,565.7298,31992.19);
  cutg->SetPoint(3,1.380665,3720.703);
  cutg->SetPoint(4,-2.93393,-234.3752);
  cutg->SetPoint(5,48.84122,131.8357);
  cutg->SetPoint(6,50.56706,131.8357);
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = v0dst.LoadTree(jentry);
    if (ientry < 0) break;
    nb = t->GetEntry(jentry);   nbytes += nb;
    
    if(jentry%100000==0)cout<<jentry<<" "<<nentries<<endl;
    // hrefMult->Fill(v0dst.nrefmult);
    /*    for(Int_t runN = 0; runN <219; runN++)
      {
	if(bad_run_list_200GeV[runN]==v0dst.runnumber)
	  {
	    cout<<"********    bad run removed    **************"<<endl;
	    continue;
	  }
      }
    */
    
    const UShort_t refmult = v0dst.nrefmult;
    const Double_t vz = v0dst.primvertexZ;
    const Double_t zdcCoincidenceRate = v0dst.zdcadc0;
    
    
    

    
    hvz->Fill(v0dst.primvertexZ); 
    if(fabs(v0dst.primvertexZ)>40.0)continue;
    hrefmultbbc->Fill(v0dst.nrefmult,v0dst.bbcadcsumeast); 
    
    
    //    if(v0dst.nrefmult < 10.0) continue;
    if(!(cutg->IsInside(v0dst.nrefmult,v0dst.bbcadcsumeast)))continue;
    hrefmult->Fill(v0dst.nrefmult);         
    if(v0dst.nrefmult < 10.0) continue;
    //fill histograms
    //cout<<v0dst.primvertexZ<<endl;
    Int_t centbin = getCentBin(v0dst.nrefmult);
    zvert = getZbin(v0dst.primvertexZ);
    Int_t grp = hmGroup->FindBin(v0dst.runnumber)-1;
    if(zvert<0)continue;
    // if(grp<0 || grp >= kGroup) continue;
    
    // hmCent[grp]->Fill(v0dst.nrefmult);    
    if(centbin==kCentBin)centbin = -1;
    if(centbin<0)continue;
    counter = 0;
    counterxi = 0;
    hevtZbin->Fill(zvert);
    hevtcentbin->Fill(centbin);
    
    if(zvert==0)evt = zevt1;
    if(zvert==1)evt = zevt2;
    if(zvert==2)evt = zevt3;
    if(zvert==3)evt = zevt4;
    if(zvert==4)evt = zevt5;
    if(zvert==5)evt = zevt6;
    lm[zvert][evt][0].CentBin = centbin;
    //cout<<zvert<<" "<<evt<<endl;
    for(int i = 0; i<v0dst.nLambda;i++)
      {
	
	if(v0dst.v0dca_Lambda[i]>0.4)continue;
	if(v0dst.v0declen_Lambda[i]<5.0)continue;
	if(fabs(v0dst.v0rapidity_Lambda[i])>0.8)continue;
	if(v0dst.dau1dca_Lambda[i]<0.6)continue;
	if(v0dst.dau2dca_Lambda[i]<1.5)continue;
	if(v0dst.dca1to2_Lambda[i]>0.8)continue;
	if(fabs(v0dst.dau1nsigma_Lambda[i])>3.0)continue;
	if(fabs(v0dst.dau2nsigma_Lambda[i])>3.0)continue;
	hmass[centbin]->Fill(v0dst.v0mass_Lambda[i]);
	
	
	if(fabs(v0dst.v0mass_Lambda[i]-pdgmass)>0.007)continue;
	//NLambda[centbin]->Fill(v0dst.nv0);
	lm[zvert][evt][counter].dau1_id = v0dst.dau1id_Lambda[i];
	lm[zvert][evt][counter].dau2_id = v0dst.dau2id_Lambda[i];
	lm[zvert][evt][counter].Px = v0dst.v0px_Lambda[i];
	lm[zvert][evt][counter].Py = v0dst.v0py_Lambda[i];
	lm[zvert][evt][counter].Pz = v0dst.v0pz_Lambda[i];
	
	lm[zvert][evt][counter].PVx = v0dst.primvertexX;
	lm[zvert][evt][counter].PVy = v0dst.primvertexY;
	lm[zvert][evt][counter].PVz = v0dst.primvertexZ;


	lm[zvert][evt][counter].lax = v0dst.v0x_Lambda[i];
	lm[zvert][evt][counter].lay = v0dst.v0y_Lambda[i];
	lm[zvert][evt][counter].laz = v0dst.v0z_Lambda[i];
	
	lm[zvert][evt][counter].p_px = v0dst.dau1px_Lambda[i];
	lm[zvert][evt][counter].p_py = v0dst.dau1py_Lambda[i];
	lm[zvert][evt][counter].p_pz = v0dst.dau1pz_Lambda[i];
	
	lm[zvert][evt][counter].pi_px = v0dst.dau2px_Lambda[i];
	lm[zvert][evt][counter].pi_py = v0dst.dau2py_Lambda[i];
	lm[zvert][evt][counter].pi_pz = v0dst.dau2pz_Lambda[i];
	
	lm[zvert][evt][counter].mass = v0dst.v0mass_Lambda[i];
	
	counter++;
	
      }
    //if(counter > 30) continue;
    NLambda[centbin]->Fill(counter);
    if(zvert==0)lm[zvert][evt][0].totalv0 = counter;   
    if(zvert==1)lm[zvert][evt][0].totalv0 = counter;   
    if(zvert==2)lm[zvert][evt][0].totalv0 = counter;   
    if(zvert==3)lm[zvert][evt][0].totalv0 = counter;  
    if(zvert==4)lm[zvert][evt][0].totalv0 = counter;   
    if(zvert==5)lm[zvert][evt][0].totalv0 = counter;   
    
    
    for(int i = 0; i<v0dst.nXi;i++)
      {
	
	if(v0dst.xidca_Xi[i]>0.4)continue;
	if(v0dst.v0declen_Xi[i]<6.0)continue;
	if(v0dst.xideclen_Xi[i]<4.0)continue;
	if(fabs(v0dst.xirapidity_Xi[i])>0.8)continue;
	if(v0dst.xideclen_Xi[i]>v0dst.v0declen_Xi[i])continue;
	if(v0dst.dau1dca_Xi[i]<0.6)continue;
	if(v0dst.dau2dca_Xi[i]<2.0)continue;
	if(v0dst.dca1to2_Xi[i]>0.8)continue;
	if(fabs(v0dst.dau1nsigma_Xi[i])>3.0)continue;
	if(fabs(v0dst.dau2nsigma_Xi[i])>3.0)continue;
	if(v0dst.bachdca_Xi[i]<2.0)continue;
	hmass[centbin]->Fill(v0dst.ximass_Xi[i]);
	if(fabs(v0dst.ximass_Xi[i]-pdgmass_xi)>0.007)continue;
	//NXi[centbin]->Fill(v0dst.nv0);
	xi[zvert][evt][counterxi].dau1_id = v0dst.dau1id_Xi[i];
	xi[zvert][evt][counterxi].dau2_id = v0dst.dau2id_Xi[i];
	xi[zvert][evt][counterxi].bach_id = v0dst.bachid_Xi[i];
	xi[zvert][evt][counterxi].Px = v0dst.xipx_Xi[i];
	xi[zvert][evt][counterxi].Py = v0dst.xipy_Xi[i];
	xi[zvert][evt][counterxi].Pz = v0dst.xipz_Xi[i];
	
	xi[zvert][evt][counterxi].PVx = v0dst.primvertexX;
	xi[zvert][evt][counterxi].PVy = v0dst.primvertexY;
	xi[zvert][evt][counterxi].PVz = v0dst.primvertexZ;


	xi[zvert][evt][counterxi].lax = v0dst.xix_Xi[i];
	xi[zvert][evt][counterxi].lay = v0dst.xiy_Xi[i];
	xi[zvert][evt][counterxi].laz = v0dst.xiz_Xi[i];
	
	xi[zvert][evt][counterxi].p_px = v0dst.v0px_Xi[i];
	xi[zvert][evt][counterxi].p_py = v0dst.v0py_Xi[i];
	xi[zvert][evt][counterxi].p_pz = v0dst.v0pz_Xi[i];
	
	xi[zvert][evt][counterxi].pi_px = v0dst.bachpx_Xi[i];
	xi[zvert][evt][counterxi].pi_py = v0dst.bachpy_Xi[i];
	xi[zvert][evt][counterxi].pi_pz = v0dst.bachpz_Xi[i];
	
	xi[zvert][evt][counterxi].mass = v0dst.ximass_Xi[i];
	
	counterxi++;
	
      }
    //if(counter > 30) continue;
    //    cout<<counterxi<<endl;	
    NXi[centbin]->Fill(counterxi);
    if(zvert==0)xi[zvert][evt][0].totalv0 = counterxi;   
    if(zvert==1)xi[zvert][evt][0].totalv0 = counterxi;   
    if(zvert==2)xi[zvert][evt][0].totalv0 = counterxi;   
    if(zvert==3)xi[zvert][evt][0].totalv0 = counterxi;  
    if(zvert==4)xi[zvert][evt][0].totalv0 = counterxi;   
    if(zvert==5)xi[zvert][evt][0].totalv0 = counterxi;   
    
    

    
    
    //cout<<" event no "<< jentry<<" evt mixed "<<evt<<" nv0 "<<counter<<" z bin  "<<zvert<<" centbin "<< centbin<<endl;	  
    TVector3 v1,v2, n1,n2,vertex1,vertex2,R,boostv1;
    TLorentzVector LA1,LA2,pair,pair2,Qvect,lm1,lm2,pion1,pion2,LMPI1,LMPI2;
    TVector3 v1dau1,v2dau1,v2dau2,v1dau2;
    Int_t tNV0,tNXi,tNV2,Z;
    Double_t dotn1n2 = 0,Dotp1p2 =0,dotp1p2CMS=0,directionV1toV2 =0,directionV2toV1 =0;
    TVector2 vpt1,vpt2,kt;
    Double_t gamma,beta, pz1L,pE1L,Px1R,Py1R, Px1C,PE1C;   
    Double_t pz2L,pE2L,Px2R,Py2R, Px2C,PE2C;   
    
    
    tNV0 = lm[zvert][evt][0].totalv0;
    tNXi = xi[zvert][evt][0].totalv0;
    
    //    if(lm[zvert][evt][0].CentBin!=lm[zvert][evt][0].CentBin)continue;
    //if(lm[iev][0].ZBin!=lm[iev][0].ZBin)continue;
    for(Int_t jnv0 = 0; jnv0<tNV0;jnv0++)
      {
	
	for(Int_t inv01=0;inv01<tNXi;inv01++)
	  {
	    //cout<<"ievt  "<<evt<<"    "<<inv01<<" lm1 "<<LA1.Mag()<<"  "<<jnv0<<" lm2 "<<LA2.Mag()<<endl; 
	    if(lm[zvert][evt][jnv0].dau1_id==xi[zvert][evt][inv01].dau1_id)continue;
	    if(lm[zvert][evt][jnv0].dau2_id==xi[zvert][evt][inv01].dau2_id)continue;
	    if(lm[zvert][evt][jnv0].dau2_id==xi[zvert][evt][inv01].bach_id)continue;


	    v1.SetXYZ(xi[zvert][evt][inv01].Px,xi[zvert][evt][inv01].Py,xi[zvert][evt][inv01].Pz);
	    v2.SetXYZ(lm[zvert][evt][jnv0].Px,lm[zvert][evt][jnv0].Py,lm[zvert][evt][jnv0].Pz);
	    
	    v1dau1.SetXYZ(xi[zvert][evt][inv01].p_px,xi[zvert][evt][inv01].p_py,xi[zvert][evt][inv01].p_pz);
	    v1dau2.SetXYZ(xi[zvert][evt][inv01].pi_px,xi[zvert][evt][inv01].pi_py,xi[zvert][evt][inv01].pi_pz);
	    
	    v2dau1.SetXYZ(lm[zvert][evt][jnv0].p_px,lm[zvert][evt][jnv0].p_py,lm[zvert][evt][jnv0].p_pz);
	    v2dau2.SetXYZ(lm[zvert][evt][jnv0].pi_px,lm[zvert][evt][jnv0].pi_py,lm[zvert][evt][jnv0].pi_pz);
	    
	    vertex1.SetXYZ(xi[zvert][evt][inv01].lax,xi[zvert][evt][inv01].lay,xi[zvert][evt][inv01].laz);
	    
	    vertex2.SetXYZ(lm[zvert][evt][jnv0].lax,lm[zvert][evt][jnv0].lay,lm[zvert][evt][jnv0].laz);


	    n1= v1dau1.Cross(v1dau2);
	    n2 = v2dau1.Cross(v2dau2);
	    R= vertex1-vertex2;

	    dotn1n2 = n1.Unit().Dot(n2.Unit());
	    hdotn1n2->Fill(dotn1n2,R.Mag());
	    // if()continue;
	    if(R.Mag()<3 && fabs(dotn1n2)>0.98)continue;
	    LA1.SetVectM(v1,xi[zvert][evt][inv01].mass);
	    LA2.SetVectM(v2,lm[zvert][evt][jnv0].mass);

	    pair = LA1+LA2;  		  
	    Qvect = (LA1-LA2);
	   
	    
	    
	    
	    hQ[centbin]->Fill(fabs(Qvect.Mag()));
	    hIm2lm[centbin]->Fill(pair.M());
	    
	  }
	
	
      }
    
    
    if(zevt1 ==kEvent)zevt1 =0;
    if(zevt2 ==kEvent)zevt2 =0;
    if(zevt3 ==kEvent)zevt3 =0;
    if(zevt4 ==kEvent)zevt4 =0;
    if(zevt5 ==kEvent)zevt5 =0;
    if(zevt6 ==kEvent)zevt6 =0;
    
  }
  
  
  ohm.Write();	//save all booked histogram
  ohm.Close();
  
  //delete lm [][];
  //delete ohm;
  delete t;
  cout<<"i m here"<<endl; 
  // delete tFin;
  //  return 1;
  
}

Int_t getCentBin(Int_t nrefmult){
  
  Float_t centbd[kCentBin+1]={10,21,41,72,118,182,266,375,441,700};//{0,7,15,185.};,,{0,6.5,10.5,200.}}; //from H. Masui{375,441,700};//{81.0,125.0,185.0,265.0,316.0,600.0};
  //  Float_t centbd[kCentBin+1]={10,700};//{0,7,15,185.};,,{0,6.5,10.5,200.}}; //from H. Masui{375,441,700};//{81.0,125.0,185.0,265.0,316.0,600.0};
  
  //{0,7,15,185.};,,{0,6.5,10.5,200.}}; //from H. Masui  Int_t centbd[kCentBin+1]={10.0,21.0,41.0,72.0,118.0,182.0,266.0,375.0,441.0,700.0};//{7,118,600};
  //  Int_t centbd[kCentBin+1]={7,118,600};
  Int_t s;
  
  if(nrefmult<centbd[0] || nrefmult>= centbd[kCentBin])return -1;
  
  for(s=0;s<kCentBin;s++){
    if(centbd[s]<=nrefmult && centbd[s+1]>nrefmult)
      {
	//cout<<"i from getCentBin   "<<i<<"  refmult "<<nrefmult<<endl;
	return s;
      }
  }
}

Int_t getPtBin(Float_t pt){
  
  Float_t ptbd[kPtBin+1]={0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.5,3.0,3.5,4.5,6.0};
  Int_t ip;
  
  if(pt<ptbd[0] || pt>= ptbd[kPtBin])return -1;
  
  for(ip=0;ip<kPtBin;ip++)
    {
      if(ptbd[ip]<=pt && ptbd[ip+1]>pt)return ip;
    }
}

Int_t getZbin(Float_t Zvert)
{
  //cout<<kZBin<<endl;
  //  Float_t zbin[kZBin+1]={-30.0,-15.0,0.0,15.0,30.0};
  Float_t zbin[kZBin+1]={-40.0,-30.,-15,0,15,30,40.0};
  Int_t z;
  if(Zvert < zbin[0] || Zvert >= zbin[kZBin])return -1;
  for(z =0;z<kZBin;z++){
    //cout<<zbin[z]<<"  "<<zbin[kZBin]<<"  "<<Zvert<<endl;
    if(zbin[z]<=Zvert && zbin[z+1]>Zvert)return z;
  }
}

TChain* ChainThem(char* filelist, char* treename, int nlist, int block){
  
  TChain *globChain = new TChain(treename);
  
  cout << ">>> Load Chain from file: " << filelist << endl;
  ifstream fList(filelist);
  if (!fList)
    {
      cout << "!!! Can't open file " << filelist << endl;
	return;
    }
  
  int Ncount = 0;
  int Nfiles = 0;
  char lineFromFile[255];
  while(fList.getline(lineFromFile, 250))
   {
     Ncount++;
     if(Ncount<=nlist*block)continue;
     if(Ncount>(nlist+1)*block)break;
     if(globChain->Add(lineFromFile,0)){
       cout << ">> File '" << lineFromFile << "' has been loaded" << endl;
       Nfiles ++;
     }
     else
       cout << ">> Can't load file '" << lineFromFile << "'" << endl;
   }
  
  cout << ">> Total number of entries: " << globChain->GetEntriesFast() << endl;
  fList.close();
  
  if(Nfiles == 0){
    delete globChain;
    return NULL;
  }
  
  return globChain;
}



