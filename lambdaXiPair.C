#include "TMath.h"
#include "TFile.h"
#include "TH1F.h"
#include "TChain.h"
#include "StV0dst.h"//TODO: include the header file of StPhysicalHelix.h
#include "MyHelix.h"
void lambdaXiPair(){
//================Initialize Some Parameters================================================
    Double_t xiMass = 1.321;
    Dobule_t lambdaMass = 1.115;
    
//================Chain Them And Initialize The Accepting Structure==========================
    TChain* chain = new TChain("chainTree");
    
    chain -> Add("/media/qi_/day133/*picodst*");
    chain -> MakeClass("v0dst");
    
    gRoot -> LoadMacro("v0dst.C");// Just load this structure. but we can do by including header file, right? But this is just a macro. Anyway we have to load the StPhysical Helix header file
    v0dst v0dst(chain);

//================Book Histograms===========================================
    TH1F* hPairInvMass = new TH1F("pairInvMass", "Lambda-Xi Invariant Mass", 200, 2, 2.5);

//================Get Essential Info. From Chain=============================
    Int_t nEvent = chain -> GetEntriesFast();

//================Apply Cuts To Pair Lambda And Cascade Minus====================
    for(Int_t i = 0; i < nEvent; i++){

        Int_t currentEntry  = v0dst -> LoadTree(i); 
        if(currentEntry < 0) continue;

        Int_t numberOfLambda = v0dst.nLambda;
        Int_t numberOfXi = v0dst.nXi;

        for(Int_t j = 0; j < numberOfLambda; j++){

            StThreeVectorF primaryVertexPosition(v0dst.primvertexX, v0dst.primvertexY, v0dst.primvertexZ);

            StThreeVectorF pLambda(v0dst.v0px_Lambda[j], v0dst.v0py_Lambda[j], v0dst.v0pz_Lambda[j]);
            StThreeVectorf xLambda(v0dst.v0x_Lambda[j], v0dst.v0y_Lambda[j], v0dst.v0z_Lambda[j]);
            StPhysicalHelix lambdaHelix(pLambda / pLambda.perp() * 100, xLambda, v0dst.magn * kilogauss, 1);//TODO
          
            if(!pSetOfCutsLambda(v0dst, j)) continue;//TODO: Implement this function

            for(Int_t k = 0; k < numberOfXi; k++){
                
                StThreeVectorF pXi(v0dst.v0px_Xi[k], v0dst.v0py_Xi[k], v0dst.v0pz_Xi[k]);
                StThreeVectorF xXi(v0dst.v0x_Xi[k], v0dst.v0y_Xi[k], v0dst.v0z_Xi[k]);
                StPhysicalHelix xiHelix(pXi, xXi, v0dst.magn * kilogauss, 1);//TODO

                if(!pSetOfCutsXi(v0dst, k)) continue;//TODO: Implement this cuts set function

                StThreeVectorF boundStatePosition;
                StThreeVectorF lambdaP, xiP;
             
                Double_t lambdaXiDca = closestDistance(lambdaHelix, xiHelix, v0dst.magn, primaryVertexPosition, boundStatePosition, lambdaP, xiP);

//================Calculate The Invariant Mass========================
                if(pCutLambdaXiDca(lambdaXiDca)){
                                        
                    Double_t lambdaE = sqrt(lambdaMass * lambdaMass + lambdaP * lambdaP);
                    Double_t xiE = sqrt(xiMass * xiMass + xiP * xiP);

                    Double_t totalE = lambdaE + xiE;
                    StThreeVectorF totalP = lambdaP + xiP;

                    Double_t invariantMass_Pair = sqrt(totalE * totalE - totalP.mag2());
                    hPairInvMass -> Fill(invariantMass_Pair);
                }
            }
        }
    }

//================Fill Histograms=======================================
}

Bool_t pCutLambdaXiDca(Double_t dca){
    if(dca > dcaLeEq) return false;
    else return true;
}

Bool_t pSetOfCutsLambda(v0dst v0dst, Int_t j){// TODO: finish these blanks

    if(v0dst.v0dca_Lambda[j] > 0.4) return false;
    if(v0dst.v0rapidity_Lambda[j] > 0.8) return false;//TODO: whats this
    if(v0dst.v0declen_Lambda[j] < 5.0) return false;
    if(v0dst.dca1to2_Lambda[j] > 0.8) return false;
    if(v0dst.dau1dca_Lambda[j] < 0.6) return false;
    if(v0dst.dau2dca_Lambda[j] < 1.5) return false;//TODO: why difference?
    if(v0dst.dau1nsigma_Lambda[j] > 3.0) return false;
    if(v0dst.dau2nsigma_Lambda[j] > 3.0) return false;
   
    else return true;
}

Bool_t pSetOfCutsXi(v0dst v0dst, Int_t k){// TODO: Double check whether this is ok for Xi or we need some modification 
    if(v0dst.v0dca_Xi[k] > 0.4) return false;//TODO: should be bigger than some value
    if(v0dst.v0rapidity_Xi[k] > 0.8) return false;
    if(v0dst.v0declen_Xi[k] < 5.0) return false;

    if(v0dst.dcav0tobach_Xi[k] > 0.8) return false;

    if(v0dst.dca1to2_Xi[k] > 0.8) return false;
    if(v0dst.dau1dca_Xi[k] < 0.6) return false;
    if(v0dst.dau2dca_Xi[k] < 1.5) return false;
    if(v0dst.dau1nsigma_Xi[k] > 3.0) return false;
    if(v0dst.dau2nsigma_Xi[k] > 3.0) return false;
    
    if(v0dst.dau1id_Lambda == v0dst.dau1id_Xi) return false;//TODO: this cut is to eliminate the possibility that xi is the father of the pairing lambda, but need to be implemented.
    if(v0dst.dau2id_Lambda == v0dst.dau2id_Xi) return false;
    if(v0dst.dau2id_Lambda == v0dst.bachid_Xi) return false;
    if(v0dst.dau2id_Xi == v0dst.bachid_Xi) return false;
   
    else return true;
}
