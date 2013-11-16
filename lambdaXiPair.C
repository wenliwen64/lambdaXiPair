#include "TMath.h"
#include "TFile.h"
#include "TH1F.h"
#include "TChain.h"
#include "StV0dst.h"
void lambdaXiPair(){
//================Initialize Some Parameters================================================
    Double_t xiMass = 1.321;
    Dobule_t lambdaMass = 1.115;
    
//================Chain Them And Initialize The Accepting Structure==========================
    TChain* chain = new TChain("chainTree");
    chain -> Add("/media/qi_/day133/*picodst*");
    
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

            StPhysicalHelix lambdaHelix//TODO
          
            if(!pSetOfCutsLambda(v0dst)) continue;//TODO: Implement this function

            for(Int_t k = 0; k < numberOfXi; k++){
                
                if(!pSetOfCutsXi(v0dst)) continue;//TODO: Implement this cuts set function

                StPhysicalHelix xiHelix//TODO
                StThreeVectorF boundStatePosition;
                StThreeVectorF lambdaP, xiP;
             
                Double_t lambdaXiDca = closestDistance(lambdaHelix, xiHelix, magneticField, primaryVertexPosition, boundStatePosition, lambdaP, xiP);

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

Bool_t pSetOfCutsLambda(v0dst v0dst){// TODO: finish these blanks
    if(v0dst.v02PV > ) return false;
    if(v0dst.v0Rapidity > ) return false;
    if(v0dst.v0DecLength > ) return false;
    if(v0dst.v0Dca2Dau >) return false;
    if(v0dst.dau1Dca < ) return false;
    if(v0dst.dau2Dca < ) return false;
    if(v0dst.dau1NsigmaProton > ) return false;
    if(v0dst.dau2NsigmaPion > ) return false;
   
    else return true;
}

Bool_t pSetOfCutsxi(v0dst v0dst){// TODO: Double check whether this is ok for Xi or we need some modification 
    if(v0dst.v02PV > ) return false;
    if(v0dst.v0Rapidity > ) return false;
    if(v0dst.v0DecLength > ) return false;
    if(v0dst.v0Dca2Dau >) return false;
    if(v0dst.dau1Dca < ) return false;
    if(v0dst.dau2Dca < ) return false;
    if(v0dst.dau1NsigmaProton > ) return false;
    if(v0dst.dau2NsigmaPion > ) return false;
   
    else return true;
}
