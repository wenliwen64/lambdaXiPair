#include "TMath.h"
#include "TFile.h"
#include "TH1F.h"
#include "TChain.h"
void lambdaXiPair(){
//================Chain Them And Initialize The Accepting Structure==========================
    TChain* chain = new TChain("chainTree");
    chain -> Add("/media/qi_/day133/*picodst*");
    
    gRoot -> LoadMacro("v0dst.C");
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

            Double_t xiMass = v0dst.v0mass_xi;
            StPhysicalHelix lambdaHelix//TODO

            for(Int_t k = 0; k < numberOfXi; k++){
                
                Double_t lambdaMass = v0dst.v0mass_Lambda;
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

//================Fill Histograms============================
}

Bool_t pCutLambdaXiDca(Double_t dca){
    if(dca > dcaLeEq) return false;
    else return true;
}
