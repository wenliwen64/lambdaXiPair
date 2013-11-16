//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Nov 15 22:03:36 2013 by ROOT version 5.27/04
// from TTree V0PicoDst/V0PicoDst from StV0Maker
// found on file: 782D1E17E22AAA155DC37F6D0C6365A8_99.MultiStrange.picodst.root
//////////////////////////////////////////////////////////

#ifndef analyze_h
#define analyze_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class analyze {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           runnumber;
   Int_t           evtnumber;
   Int_t           trgmode;
   Int_t           nrefmult;
   Int_t           nrefmultTOF;
   Int_t           bbcadcsumeast;
   Float_t         zdcadc0;
   Double_t        bbccirate;
   Float_t         primvertexX;
   Float_t         primvertexY;
   Float_t         primvertexZ;
   Float_t         magn;
   Int_t           nProton;
   Int_t           nAntiProton;
   Int_t           nLambda;
   Int_t           nAntiLambda;
   Int_t           nXi;
   Int_t           nAntiXi;
   Int_t           id_Proton[328];   //[nProton]
   Int_t           nhits_Proton[328];   //[nProton]
   Int_t           nhitsFit_Proton[328];   //[nProton]
   Float_t         dedx_Proton[328];   //[nProton]
   Float_t         nsigmaproton_Proton[328];   //[nProton]
   Float_t         nsigmapion_Proton[328];   //[nProton]
   Float_t         nsigmakaon_Proton[328];   //[nProton]
   Float_t         nsigmaelectron_Proton[328];   //[nProton]
   Float_t         pt_Proton[328];   //[nProton]
   Float_t         rapidity_Proton[328];   //[nProton]
   Float_t         eta_Proton[328];   //[nProton]
   Float_t         x_Proton[328];   //[nProton]
   Float_t         y_Proton[328];   //[nProton]
   Float_t         z_Proton[328];   //[nProton]
   Float_t         px_Proton[328];   //[nProton]
   Float_t         py_Proton[328];   //[nProton]
   Float_t         pz_Proton[328];   //[nProton]
   Float_t         dca_Proton[328];   //[nProton]
   Float_t         dca2d_Proton[328];   //[nProton]
   Int_t           tofflag_Proton[328];   //[nProton]
   Float_t         tof_Proton[328];   //[nProton]
   Float_t         tofpathlen_Proton[328];   //[nProton]
   Float_t         pathlen_Proton[328];   //[nProton]
   Int_t           primaryflag_Proton[328];   //[nProton]
   Float_t         px_primary_Proton[328];   //[nProton]
   Float_t         py_primary_Proton[328];   //[nProton]
   Float_t         pz_primary_Proton[328];   //[nProton]
   Int_t           id_AntiProton[165];   //[nAntiProton]
   Int_t           nhits_AntiProton[165];   //[nAntiProton]
   Int_t           nhitsFit_AntiProton[165];   //[nAntiProton]
   Float_t         dedx_AntiProton[165];   //[nAntiProton]
   Float_t         nsigmaproton_AntiProton[165];   //[nAntiProton]
   Float_t         nsigmapion_AntiProton[165];   //[nAntiProton]
   Float_t         nsigmakaon_AntiProton[165];   //[nAntiProton]
   Float_t         nsigmaelectron_AntiProton[165];   //[nAntiProton]
   Float_t         pt_AntiProton[165];   //[nAntiProton]
   Float_t         rapidity_AntiProton[165];   //[nAntiProton]
   Float_t         eta_AntiProton[165];   //[nAntiProton]
   Float_t         x_AntiProton[165];   //[nAntiProton]
   Float_t         y_AntiProton[165];   //[nAntiProton]
   Float_t         z_AntiProton[165];   //[nAntiProton]
   Float_t         px_AntiProton[165];   //[nAntiProton]
   Float_t         py_AntiProton[165];   //[nAntiProton]
   Float_t         pz_AntiProton[165];   //[nAntiProton]
   Float_t         dca_AntiProton[165];   //[nAntiProton]
   Float_t         dca2d_AntiProton[165];   //[nAntiProton]
   Int_t           tofflag_AntiProton[165];   //[nAntiProton]
   Float_t         tof_AntiProton[165];   //[nAntiProton]
   Float_t         tofpathlen_AntiProton[165];   //[nAntiProton]
   Float_t         pathlen_AntiProton[165];   //[nAntiProton]
   Int_t           primaryflag_AntiProton[165];   //[nAntiProton]
   Float_t         px_primary_AntiProton[165];   //[nAntiProton]
   Float_t         py_primary_AntiProton[165];   //[nAntiProton]
   Float_t         pz_primary_AntiProton[165];   //[nAntiProton]
   Float_t         v0mass_Lambda[688];   //[nLambda]
   Float_t         v0pt_Lambda[688];   //[nLambda]
   Float_t         v0rapidity_Lambda[688];   //[nLambda]
   Float_t         v0eta_Lambda[688];   //[nLambda]
   Float_t         v0x_Lambda[688];   //[nLambda]
   Float_t         v0y_Lambda[688];   //[nLambda]
   Float_t         v0z_Lambda[688];   //[nLambda]
   Float_t         v0px_Lambda[688];   //[nLambda]
   Float_t         v0py_Lambda[688];   //[nLambda]
   Float_t         v0pz_Lambda[688];   //[nLambda]
   Float_t         v0declen_Lambda[688];   //[nLambda]
   Float_t         v0dca_Lambda[688];   //[nLambda]
   Float_t         v0dca2d_Lambda[688];   //[nLambda]
   Float_t         v0pathlen_Lambda[688];   //[nLambda]
   Int_t           dau1id_Lambda[688];   //[nLambda]
   Int_t           dau2id_Lambda[688];   //[nLambda]
   Float_t         dau1dca_Lambda[688];   //[nLambda]
   Float_t         dau1dca2d_Lambda[688];   //[nLambda]
   Int_t           dau1nhits_Lambda[688];   //[nLambda]
   Float_t         dau1dedx_Lambda[688];   //[nLambda]
   Float_t         dau1nsigma_Lambda[688];   //[nLambda]
   Float_t         dau1eta_Lambda[688];   //[nLambda]
   Float_t         dau1pt_Lambda[688];   //[nLambda]
   Float_t         dau1px_Lambda[688];   //[nLambda]
   Float_t         dau1py_Lambda[688];   //[nLambda]
   Float_t         dau1pz_Lambda[688];   //[nLambda]
   Int_t           dau1tpc_Lambda[688];   //[nLambda]
   Int_t           dau1ssd_Lambda[688];   //[nLambda]
   Int_t           dau1svt_Lambda[688];   //[nLambda]
   Int_t           dau1tofflag_Lambda[688];   //[nLambda]
   Float_t         dau1tof_Lambda[688];   //[nLambda]
   Float_t         dau1pathlen_Lambda[688];   //[nLambda]
   Float_t         dau2dca_Lambda[688];   //[nLambda]
   Float_t         dau2dca2d_Lambda[688];   //[nLambda]
   Int_t           dau2nhits_Lambda[688];   //[nLambda]
   Float_t         dau2dedx_Lambda[688];   //[nLambda]
   Float_t         dau2nsigma_Lambda[688];   //[nLambda]
   Float_t         dau2eta_Lambda[688];   //[nLambda]
   Float_t         dau2pt_Lambda[688];   //[nLambda]
   Float_t         dau2px_Lambda[688];   //[nLambda]
   Float_t         dau2py_Lambda[688];   //[nLambda]
   Float_t         dau2pz_Lambda[688];   //[nLambda]
   Int_t           dau2tpc_Lambda[688];   //[nLambda]
   Int_t           dau2ssd_Lambda[688];   //[nLambda]
   Int_t           dau2svt_Lambda[688];   //[nLambda]
   Int_t           dau2tofflag_Lambda[688];   //[nLambda]
   Float_t         dau2tof_Lambda[688];   //[nLambda]
   Float_t         dau2pathlen_Lambda[688];   //[nLambda]
   Float_t         dca1to2_Lambda[688];   //[nLambda]
   Float_t         Lambdaflag[688];   //[nLambda]
   Float_t         v0mass_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0pt_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0rapidity_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0eta_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0x_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0y_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0z_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0px_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0py_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0pz_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0declen_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0dca_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0dca2d_AntiLambda[523];   //[nAntiLambda]
   Float_t         v0pathlen_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau1id_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau2id_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1dca_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1dca2d_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau1nhits_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1dedx_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1nsigma_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1eta_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1pt_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1px_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1py_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1pz_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau1tpc_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau1ssd_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau1svt_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau1tofflag_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1tof_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau1pathlen_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2dca_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2dca2d_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau2nhits_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2dedx_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2nsigma_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2eta_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2pt_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2px_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2py_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2pz_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau2tpc_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau2ssd_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau2svt_AntiLambda[523];   //[nAntiLambda]
   Int_t           dau2tofflag_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2tof_AntiLambda[523];   //[nAntiLambda]
   Float_t         dau2pathlen_AntiLambda[523];   //[nAntiLambda]
   Float_t         dca1to2_AntiLambda[523];   //[nAntiLambda]
   Float_t         AntiLambdaflag[523];   //[nAntiLambda]
   Float_t         v0mass_Xi[410];   //[nXi]
   Float_t         v0pt_Xi[410];   //[nXi]
   Float_t         v0rapidity_Xi[410];   //[nXi]
   Float_t         v0eta_Xi[410];   //[nXi]
   Float_t         v0x_Xi[410];   //[nXi]
   Float_t         v0y_Xi[410];   //[nXi]
   Float_t         v0z_Xi[410];   //[nXi]
   Float_t         v0px_Xi[410];   //[nXi]
   Float_t         v0py_Xi[410];   //[nXi]
   Float_t         v0pz_Xi[410];   //[nXi]
   Float_t         v0declen_Xi[410];   //[nXi]
   Float_t         v0dca_Xi[410];   //[nXi]
   Float_t         v0dca2d_Xi[410];   //[nXi]
   Float_t         v0pathlen_Xi[410];   //[nXi]
   Int_t           dau1id_Xi[410];   //[nXi]
   Float_t         dau1dca_Xi[410];   //[nXi]
   Float_t         dau1dca2d_Xi[410];   //[nXi]
   Int_t           dau1nhits_Xi[410];   //[nXi]
   Float_t         dau1dedx_Xi[410];   //[nXi]
   Float_t         dau1nsigma_Xi[410];   //[nXi]
   Float_t         dau1eta_Xi[410];   //[nXi]
   Float_t         dau1pt_Xi[410];   //[nXi]
   Float_t         dau1px_Xi[410];   //[nXi]
   Float_t         dau1py_Xi[410];   //[nXi]
   Float_t         dau1pz_Xi[410];   //[nXi]
   Int_t           dau1tpc_Xi[410];   //[nXi]
   Int_t           dau1ssd_Xi[410];   //[nXi]
   Int_t           dau1svt_Xi[410];   //[nXi]
   Int_t           dau1tofflag_Xi[410];   //[nXi]
   Float_t         dau1tof_Xi[410];   //[nXi]
   Float_t         dau1pathlen_Xi[410];   //[nXi]
   Int_t           dau2id_Xi[410];   //[nXi]
   Float_t         dau2dca_Xi[410];   //[nXi]
   Float_t         dau2dca2d_Xi[410];   //[nXi]
   Int_t           dau2nhits_Xi[410];   //[nXi]
   Float_t         dau2dedx_Xi[410];   //[nXi]
   Float_t         dau2nsigma_Xi[410];   //[nXi]
   Float_t         dau2eta_Xi[410];   //[nXi]
   Float_t         dau2pt_Xi[410];   //[nXi]
   Float_t         dau2px_Xi[410];   //[nXi]
   Float_t         dau2py_Xi[410];   //[nXi]
   Float_t         dau2pz_Xi[410];   //[nXi]
   Int_t           dau2tpc_Xi[410];   //[nXi]
   Int_t           dau2ssd_Xi[410];   //[nXi]
   Int_t           dau2svt_Xi[410];   //[nXi]
   Int_t           dau2tofflag_Xi[410];   //[nXi]
   Float_t         dau2tof_Xi[410];   //[nXi]
   Float_t         dau2pathlen_Xi[410];   //[nXi]
   Float_t         dca1to2_Xi[410];   //[nXi]
   Int_t           bachid_Xi[410];   //[nXi]
   Float_t         bachdca_Xi[410];   //[nXi]
   Float_t         bachdca2d_Xi[410];   //[nXi]
   Int_t           bachnhits_Xi[410];   //[nXi]
   Float_t         bachdedx_Xi[410];   //[nXi]
   Float_t         bachnsigma_Xi[410];   //[nXi]
   Float_t         bacheta_Xi[410];   //[nXi]
   Float_t         bachpt_Xi[410];   //[nXi]
   Float_t         bachpx_Xi[410];   //[nXi]
   Float_t         bachpy_Xi[410];   //[nXi]
   Float_t         bachpz_Xi[410];   //[nXi]
   Int_t           bachtpc_Xi[410];   //[nXi]
   Int_t           bachssd_Xi[410];   //[nXi]
   Int_t           bachsvt_Xi[410];   //[nXi]
   Int_t           bachtofflag_Xi[410];   //[nXi]
   Float_t         bachtof_Xi[410];   //[nXi]
   Float_t         bachpathlen_Xi[410];   //[nXi]
   Float_t         dcav0tobach_Xi[410];   //[nXi]
   Float_t         ximass_Xi[410];   //[nXi]
   Float_t         xipt_Xi[410];   //[nXi]
   Float_t         xirapidity_Xi[410];   //[nXi]
   Float_t         xieta_Xi[410];   //[nXi]
   Float_t         xix_Xi[410];   //[nXi]
   Float_t         xiy_Xi[410];   //[nXi]
   Float_t         xiz_Xi[410];   //[nXi]
   Float_t         xipx_Xi[410];   //[nXi]
   Float_t         xipy_Xi[410];   //[nXi]
   Float_t         xipz_Xi[410];   //[nXi]
   Float_t         xideclen_Xi[410];   //[nXi]
   Float_t         xidca_Xi[410];   //[nXi]
   Float_t         xidca2d_Xi[410];   //[nXi]
   Float_t         xisinth_Xi[410];   //[nXi]
   Float_t         xipathlen_Xi[410];   //[nXi]
   Float_t         v0mass_AntiXi[449];   //[nAntiXi]
   Float_t         v0pt_AntiXi[449];   //[nAntiXi]
   Float_t         v0rapidity_AntiXi[449];   //[nAntiXi]
   Float_t         v0eta_AntiXi[449];   //[nAntiXi]
   Float_t         v0x_AntiXi[449];   //[nAntiXi]
   Float_t         v0y_AntiXi[449];   //[nAntiXi]
   Float_t         v0z_AntiXi[449];   //[nAntiXi]
   Float_t         v0px_AntiXi[449];   //[nAntiXi]
   Float_t         v0py_AntiXi[449];   //[nAntiXi]
   Float_t         v0pz_AntiXi[449];   //[nAntiXi]
   Float_t         v0declen_AntiXi[449];   //[nAntiXi]
   Float_t         v0dca_AntiXi[449];   //[nAntiXi]
   Float_t         v0dca2d_AntiXi[449];   //[nAntiXi]
   Float_t         v0pathlen_AntiXi[449];   //[nAntiXi]
   Int_t           dau1id_AntiXi[449];   //[nAntiXi]
   Float_t         dau1dca_AntiXi[449];   //[nAntiXi]
   Float_t         dau1dca2d_AntiXi[449];   //[nAntiXi]
   Int_t           dau1nhits_AntiXi[449];   //[nAntiXi]
   Float_t         dau1dedx_AntiXi[449];   //[nAntiXi]
   Float_t         dau1nsigma_AntiXi[449];   //[nAntiXi]
   Float_t         dau1eta_AntiXi[449];   //[nAntiXi]
   Float_t         dau1pt_AntiXi[449];   //[nAntiXi]
   Float_t         dau1px_AntiXi[449];   //[nAntiXi]
   Float_t         dau1py_AntiXi[449];   //[nAntiXi]
   Float_t         dau1pz_AntiXi[449];   //[nAntiXi]
   Int_t           dau1tpc_AntiXi[449];   //[nAntiXi]
   Int_t           dau1ssd_AntiXi[449];   //[nAntiXi]
   Int_t           dau1svt_AntiXi[449];   //[nAntiXi]
   Int_t           dau1tofflag_AntiXi[449];   //[nAntiXi]
   Float_t         dau1tof_AntiXi[449];   //[nAntiXi]
   Float_t         dau1pathlen_AntiXi[449];   //[nAntiXi]
   Int_t           dau2id_AntiXi[449];   //[nAntiXi]
   Float_t         dau2dca_AntiXi[449];   //[nAntiXi]
   Float_t         dau2dca2d_AntiXi[449];   //[nAntiXi]
   Int_t           dau2nhits_AntiXi[449];   //[nAntiXi]
   Float_t         dau2dedx_AntiXi[449];   //[nAntiXi]
   Float_t         dau2nsigma_AntiXi[449];   //[nAntiXi]
   Float_t         dau2eta_AntiXi[449];   //[nAntiXi]
   Float_t         dau2pt_AntiXi[449];   //[nAntiXi]
   Float_t         dau2px_AntiXi[449];   //[nAntiXi]
   Float_t         dau2py_AntiXi[449];   //[nAntiXi]
   Float_t         dau2pz_AntiXi[449];   //[nAntiXi]
   Int_t           dau2tpc_AntiXi[449];   //[nAntiXi]
   Int_t           dau2ssd_AntiXi[449];   //[nAntiXi]
   Int_t           dau2svt_AntiXi[449];   //[nAntiXi]
   Int_t           dau2tofflag_AntiXi[449];   //[nAntiXi]
   Float_t         dau2tof_AntiXi[449];   //[nAntiXi]
   Float_t         dau2pathlen_AntiXi[449];   //[nAntiXi]
   Float_t         dca1to2_AntiXi[449];   //[nAntiXi]
   Int_t           bachid_AntiXi[449];   //[nAntiXi]
   Float_t         bachdca_AntiXi[449];   //[nAntiXi]
   Float_t         bachdca2d_AntiXi[449];   //[nAntiXi]
   Int_t           bachnhits_AntiXi[449];   //[nAntiXi]
   Float_t         bachdedx_AntiXi[449];   //[nAntiXi]
   Float_t         bachnsigma_AntiXi[449];   //[nAntiXi]
   Float_t         bacheta_AntiXi[449];   //[nAntiXi]
   Float_t         bachpt_AntiXi[449];   //[nAntiXi]
   Float_t         bachpx_AntiXi[449];   //[nAntiXi]
   Float_t         bachpy_AntiXi[449];   //[nAntiXi]
   Float_t         bachpz_AntiXi[449];   //[nAntiXi]
   Int_t           bachtpc_AntiXi[449];   //[nAntiXi]
   Int_t           bachssd_AntiXi[449];   //[nAntiXi]
   Int_t           bachsvt_AntiXi[449];   //[nAntiXi]
   Int_t           bachtofflag_AntiXi[449];   //[nAntiXi]
   Float_t         bachtof_AntiXi[449];   //[nAntiXi]
   Float_t         bachpathlen_AntiXi[449];   //[nAntiXi]
   Float_t         dcav0tobach_AntiXi[449];   //[nAntiXi]
   Float_t         ximass_AntiXi[449];   //[nAntiXi]
   Float_t         xipt_AntiXi[449];   //[nAntiXi]
   Float_t         xirapidity_AntiXi[449];   //[nAntiXi]
   Float_t         xieta_AntiXi[449];   //[nAntiXi]
   Float_t         xix_AntiXi[449];   //[nAntiXi]
   Float_t         xiy_AntiXi[449];   //[nAntiXi]
   Float_t         xiz_AntiXi[449];   //[nAntiXi]
   Float_t         xipx_AntiXi[449];   //[nAntiXi]
   Float_t         xipy_AntiXi[449];   //[nAntiXi]
   Float_t         xipz_AntiXi[449];   //[nAntiXi]
   Float_t         xideclen_AntiXi[449];   //[nAntiXi]
   Float_t         xidca_AntiXi[449];   //[nAntiXi]
   Float_t         xidca2d_AntiXi[449];   //[nAntiXi]
   Float_t         xisinth_AntiXi[449];   //[nAntiXi]
   Float_t         xipathlen_AntiXi[449];   //[nAntiXi]

   // List of branches
   TBranch        *b_runnumber;   //!
   TBranch        *b_evtnumber;   //!
   TBranch        *b_trgmode;   //!
   TBranch        *b_nrefmult;   //!
   TBranch        *b_nrefmultTOF;   //!
   TBranch        *b_bbcadcsumeast;   //!
   TBranch        *b_zdcadc0;   //!
   TBranch        *b_bbccirate;   //!
   TBranch        *b_primvertexX;   //!
   TBranch        *b_primvertexY;   //!
   TBranch        *b_primvertexZ;   //!
   TBranch        *b_magn;   //!
   TBranch        *b_nProton;   //!
   TBranch        *b_nAntiProton;   //!
   TBranch        *b_nLambda;   //!
   TBranch        *b_nAntiLambda;   //!
   TBranch        *b_nXi;   //!
   TBranch        *b_nAntiXi;   //!
   TBranch        *b_id_Proton;   //!
   TBranch        *b_nhits_Proton;   //!
   TBranch        *b_nhitsFit_Proton;   //!
   TBranch        *b_dedx_Proton;   //!
   TBranch        *b_nsigmaproton_Proton;   //!
   TBranch        *b_nsigmapion_Proton;   //!
   TBranch        *b_nsigmakaon_Proton;   //!
   TBranch        *b_nsigmaelectron_Proton;   //!
   TBranch        *b_pt_Proton;   //!
   TBranch        *b_rapidity_Proton;   //!
   TBranch        *b_eta_Proton;   //!
   TBranch        *b_x_Proton;   //!
   TBranch        *b_y_Proton;   //!
   TBranch        *b_z_Proton;   //!
   TBranch        *b_px_Proton;   //!
   TBranch        *b_py_Proton;   //!
   TBranch        *b_pz_Proton;   //!
   TBranch        *b_dca_Proton;   //!
   TBranch        *b_dca2d_Proton;   //!
   TBranch        *b_tofflag_Proton;   //!
   TBranch        *b_tof_Proton;   //!
   TBranch        *b_tofpathlen_Proton;   //!
   TBranch        *b_pathlen_Proton;   //!
   TBranch        *b_primaryflag_Proton;   //!
   TBranch        *b_px_primary_Proton;   //!
   TBranch        *b_py_primary_Proton;   //!
   TBranch        *b_pz_primary_Proton;   //!
   TBranch        *b_id_AntiProton;   //!
   TBranch        *b_nhits_AntiProton;   //!
   TBranch        *b_nhitsFit_AntiProton;   //!
   TBranch        *b_dedx_AntiProton;   //!
   TBranch        *b_nsigmaproton_AntiProton;   //!
   TBranch        *b_nsigmapion_AntiProton;   //!
   TBranch        *b_nsigmakaon_AntiProton;   //!
   TBranch        *b_nsigmaelectron_AntiProton;   //!
   TBranch        *b_pt_AntiProton;   //!
   TBranch        *b_rapidity_AntiProton;   //!
   TBranch        *b_eta_AntiProton;   //!
   TBranch        *b_x_AntiProton;   //!
   TBranch        *b_y_AntiProton;   //!
   TBranch        *b_z_AntiProton;   //!
   TBranch        *b_px_AntiProton;   //!
   TBranch        *b_py_AntiProton;   //!
   TBranch        *b_pz_AntiProton;   //!
   TBranch        *b_dca_AntiProton;   //!
   TBranch        *b_dca2d_AntiProton;   //!
   TBranch        *b_tofflag_AntiProton;   //!
   TBranch        *b_tof_AntiProton;   //!
   TBranch        *b_tofpathlen_AntiProton;   //!
   TBranch        *b_pathlen_AntiProton;   //!
   TBranch        *b_primaryflag_AntiProton;   //!
   TBranch        *b_px_primary_AntiProton;   //!
   TBranch        *b_py_primary_AntiProton;   //!
   TBranch        *b_pz_primary_AntiProton;   //!
   TBranch        *b_v0mass_Lambda;   //!
   TBranch        *b_v0pt_Lambda;   //!
   TBranch        *b_v0rapidity_Lambda;   //!
   TBranch        *b_v0eta_Lambda;   //!
   TBranch        *b_v0x_Lambda;   //!
   TBranch        *b_v0y_Lambda;   //!
   TBranch        *b_v0z_Lambda;   //!
   TBranch        *b_v0px_Lambda;   //!
   TBranch        *b_v0py_Lambda;   //!
   TBranch        *b_v0pz_Lambda;   //!
   TBranch        *b_v0declen_Lambda;   //!
   TBranch        *b_v0dca_Lambda;   //!
   TBranch        *b_v0dca2d_Lambda;   //!
   TBranch        *b_v0pathlen_Lambda;   //!
   TBranch        *b_dau1id_Lambda;   //!
   TBranch        *b_dau2id_Lambda;   //!
   TBranch        *b_dau1dca_Lambda;   //!
   TBranch        *b_dau1dca2d_Lambda;   //!
   TBranch        *b_dau1nhits_Lambda;   //!
   TBranch        *b_dau1dedx_Lambda;   //!
   TBranch        *b_dau1nsigma_Lambda;   //!
   TBranch        *b_dau1eta_Lambda;   //!
   TBranch        *b_dau1pt_Lambda;   //!
   TBranch        *b_dau1px_Lambda;   //!
   TBranch        *b_dau1py_Lambda;   //!
   TBranch        *b_dau1pz_Lambda;   //!
   TBranch        *b_dau1tpc_Lambda;   //!
   TBranch        *b_dau1ssd_Lambda;   //!
   TBranch        *b_dau1svt_Lambda;   //!
   TBranch        *b_dau1tofflag_Lambda;   //!
   TBranch        *b_dau1tof_Lambda;   //!
   TBranch        *b_dau1pathlen_Lambda;   //!
   TBranch        *b_dau2dca_Lambda;   //!
   TBranch        *b_dau2dca2d_Lambda;   //!
   TBranch        *b_dau2nhits_Lambda;   //!
   TBranch        *b_dau2dedx_Lambda;   //!
   TBranch        *b_dau2nsigma_Lambda;   //!
   TBranch        *b_dau2eta_Lambda;   //!
   TBranch        *b_dau2pt_Lambda;   //!
   TBranch        *b_dau2px_Lambda;   //!
   TBranch        *b_dau2py_Lambda;   //!
   TBranch        *b_dau2pz_Lambda;   //!
   TBranch        *b_dau2tpc_Lambda;   //!
   TBranch        *b_dau2ssd_Lambda;   //!
   TBranch        *b_dau2svt_Lambda;   //!
   TBranch        *b_dau2tofflag_Lambda;   //!
   TBranch        *b_dau2tof_Lambda;   //!
   TBranch        *b_dau2pathlen_Lambda;   //!
   TBranch        *b_dca1to2_Lambda;   //!
   TBranch        *b_Lambdaflag;   //!
   TBranch        *b_v0mass_AntiLambda;   //!
   TBranch        *b_v0pt_AntiLambda;   //!
   TBranch        *b_v0rapidity_AntiLambda;   //!
   TBranch        *b_v0eta_AntiLambda;   //!
   TBranch        *b_v0x_AntiLambda;   //!
   TBranch        *b_v0y_AntiLambda;   //!
   TBranch        *b_v0z_AntiLambda;   //!
   TBranch        *b_v0px_AntiLambda;   //!
   TBranch        *b_v0py_AntiLambda;   //!
   TBranch        *b_v0pz_AntiLambda;   //!
   TBranch        *b_v0declen_AntiLambda;   //!
   TBranch        *b_v0dca_AntiLambda;   //!
   TBranch        *b_v0dca2d_AntiLambda;   //!
   TBranch        *b_v0pathlen_AntiLambda;   //!
   TBranch        *b_dau1id_AntiLambda;   //!
   TBranch        *b_dau2id_AntiLambda;   //!
   TBranch        *b_dau1dca_AntiLambda;   //!
   TBranch        *b_dau1dca2d_AntiLambda;   //!
   TBranch        *b_dau1nhits_AntiLambda;   //!
   TBranch        *b_dau1dedx_AntiLambda;   //!
   TBranch        *b_dau1nsigma_AntiLambda;   //!
   TBranch        *b_dau1eta_AntiLambda;   //!
   TBranch        *b_dau1pt_AntiLambda;   //!
   TBranch        *b_dau1px_AntiLambda;   //!
   TBranch        *b_dau1py_AntiLambda;   //!
   TBranch        *b_dau1pz_AntiLambda;   //!
   TBranch        *b_dau1tpc_AntiLambda;   //!
   TBranch        *b_dau1ssd_AntiLambda;   //!
   TBranch        *b_dau1svt_AntiLambda;   //!
   TBranch        *b_dau1tofflag_AntiLambda;   //!
   TBranch        *b_dau1tof_AntiLambda;   //!
   TBranch        *b_dau1pathlen_AntiLambda;   //!
   TBranch        *b_dau2dca_AntiLambda;   //!
   TBranch        *b_dau2dca2d_AntiLambda;   //!
   TBranch        *b_dau2nhits_AntiLambda;   //!
   TBranch        *b_dau2dedx_AntiLambda;   //!
   TBranch        *b_dau2nsigma_AntiLambda;   //!
   TBranch        *b_dau2eta_AntiLambda;   //!
   TBranch        *b_dau2pt_AntiLambda;   //!
   TBranch        *b_dau2px_AntiLambda;   //!
   TBranch        *b_dau2py_AntiLambda;   //!
   TBranch        *b_dau2pz_AntiLambda;   //!
   TBranch        *b_dau2tpc_AntiLambda;   //!
   TBranch        *b_dau2ssd_AntiLambda;   //!
   TBranch        *b_dau2svt_AntiLambda;   //!
   TBranch        *b_dau2tofflag_AntiLambda;   //!
   TBranch        *b_dau2tof_AntiLambda;   //!
   TBranch        *b_dau2pathlen_AntiLambda;   //!
   TBranch        *b_dca1to2_AntiLambda;   //!
   TBranch        *b_AntiLambdaflag;   //!
   TBranch        *b_v0mass_Xi;   //!
   TBranch        *b_v0pt_Xi;   //!
   TBranch        *b_v0rapidity_Xi;   //!
   TBranch        *b_v0eta_Xi;   //!
   TBranch        *b_v0x_Xi;   //!
   TBranch        *b_v0y_Xi;   //!
   TBranch        *b_v0z_Xi;   //!
   TBranch        *b_v0px_Xi;   //!
   TBranch        *b_v0py_Xi;   //!
   TBranch        *b_v0pz_Xi;   //!
   TBranch        *b_v0declen_Xi;   //!
   TBranch        *b_v0dca_Xi;   //!
   TBranch        *b_v0dca2d_Xi;   //!
   TBranch        *b_v0pathlen_Xi;   //!
   TBranch        *b_dau1id_Xi;   //!
   TBranch        *b_dau1dca_Xi;   //!
   TBranch        *b_dau1dca2d_Xi;   //!
   TBranch        *b_dau1nhits_Xi;   //!
   TBranch        *b_dau1dedx_Xi;   //!
   TBranch        *b_dau1nsigma_Xi;   //!
   TBranch        *b_dau1eta_Xi;   //!
   TBranch        *b_dau1pt_Xi;   //!
   TBranch        *b_dau1px_Xi;   //!
   TBranch        *b_dau1py_Xi;   //!
   TBranch        *b_dau1pz_Xi;   //!
   TBranch        *b_dau1tpc_Xi;   //!
   TBranch        *b_dau1ssd_Xi;   //!
   TBranch        *b_dau1svt_Xi;   //!
   TBranch        *b_dau1tofflag_Xi;   //!
   TBranch        *b_dau1tof_Xi;   //!
   TBranch        *b_dau1pathlen_Xi;   //!
   TBranch        *b_dau2id_Xi;   //!
   TBranch        *b_dau2dca_Xi;   //!
   TBranch        *b_dau2dca2d_Xi;   //!
   TBranch        *b_dau2nhits_Xi;   //!
   TBranch        *b_dau2dedx_Xi;   //!
   TBranch        *b_dau2nsigma_Xi;   //!
   TBranch        *b_dau2eta_Xi;   //!
   TBranch        *b_dau2pt_Xi;   //!
   TBranch        *b_dau2px_Xi;   //!
   TBranch        *b_dau2py_Xi;   //!
   TBranch        *b_dau2pz_Xi;   //!
   TBranch        *b_dau2tpc_Xi;   //!
   TBranch        *b_dau2ssd_Xi;   //!
   TBranch        *b_dau2svt_Xi;   //!
   TBranch        *b_dau2tofflag_Xi;   //!
   TBranch        *b_dau2tof_Xi;   //!
   TBranch        *b_dau2pathlen_Xi;   //!
   TBranch        *b_dca1to2_Xi;   //!
   TBranch        *b_bachid_Xi;   //!
   TBranch        *b_bachdca_Xi;   //!
   TBranch        *b_bachdca2d_Xi;   //!
   TBranch        *b_bachnhits_Xi;   //!
   TBranch        *b_bachdedx_Xi;   //!
   TBranch        *b_bachnsigma_Xi;   //!
   TBranch        *b_bacheta_Xi;   //!
   TBranch        *b_bachpt_Xi;   //!
   TBranch        *b_bachpx_Xi;   //!
   TBranch        *b_bachpy_Xi;   //!
   TBranch        *b_bachpz_Xi;   //!
   TBranch        *b_bachtpc_Xi;   //!
   TBranch        *b_bachssd_Xi;   //!
   TBranch        *b_bachsvt_Xi;   //!
   TBranch        *b_bachtofflag_Xi;   //!
   TBranch        *b_bachtof_Xi;   //!
   TBranch        *b_bachpathlen_Xi;   //!
   TBranch        *b_dcav0tobach_Xi;   //!
   TBranch        *b_ximass_Xi;   //!
   TBranch        *b_xipt_Xi;   //!
   TBranch        *b_xirapidity_Xi;   //!
   TBranch        *b_xieta_Xi;   //!
   TBranch        *b_xix_Xi;   //!
   TBranch        *b_xiy_Xi;   //!
   TBranch        *b_xiz_Xi;   //!
   TBranch        *b_xipx_Xi;   //!
   TBranch        *b_xipy_Xi;   //!
   TBranch        *b_xipz_Xi;   //!
   TBranch        *b_xideclen_Xi;   //!
   TBranch        *b_xidca_Xi;   //!
   TBranch        *b_xidca2d_Xi;   //!
   TBranch        *b_xisinth_Xi;   //!
   TBranch        *b_xipathlen_Xi;   //!
   TBranch        *b_v0mass_AntiXi;   //!
   TBranch        *b_v0pt_AntiXi;   //!
   TBranch        *b_v0rapidity_AntiXi;   //!
   TBranch        *b_v0eta_AntiXi;   //!
   TBranch        *b_v0x_AntiXi;   //!
   TBranch        *b_v0y_AntiXi;   //!
   TBranch        *b_v0z_AntiXi;   //!
   TBranch        *b_v0px_AntiXi;   //!
   TBranch        *b_v0py_AntiXi;   //!
   TBranch        *b_v0pz_AntiXi;   //!
   TBranch        *b_v0declen_AntiXi;   //!
   TBranch        *b_v0dca_AntiXi;   //!
   TBranch        *b_v0dca2d_AntiXi;   //!
   TBranch        *b_v0pathlen_AntiXi;   //!
   TBranch        *b_dau1id_AntiXi;   //!
   TBranch        *b_dau1dca_AntiXi;   //!
   TBranch        *b_dau1dca2d_AntiXi;   //!
   TBranch        *b_dau1nhits_AntiXi;   //!
   TBranch        *b_dau1dedx_AntiXi;   //!
   TBranch        *b_dau1nsigma_AntiXi;   //!
   TBranch        *b_dau1eta_AntiXi;   //!
   TBranch        *b_dau1pt_AntiXi;   //!
   TBranch        *b_dau1px_AntiXi;   //!
   TBranch        *b_dau1py_AntiXi;   //!
   TBranch        *b_dau1pz_AntiXi;   //!
   TBranch        *b_dau1tpc_AntiXi;   //!
   TBranch        *b_dau1ssd_AntiXi;   //!
   TBranch        *b_dau1svt_AntiXi;   //!
   TBranch        *b_dau1tofflag_AntiXi;   //!
   TBranch        *b_dau1tof_AntiXi;   //!
   TBranch        *b_dau1pathlen_AntiXi;   //!
   TBranch        *b_dau2id_AntiXi;   //!
   TBranch        *b_dau2dca_AntiXi;   //!
   TBranch        *b_dau2dca2d_AntiXi;   //!
   TBranch        *b_dau2nhits_AntiXi;   //!
   TBranch        *b_dau2dedx_AntiXi;   //!
   TBranch        *b_dau2nsigma_AntiXi;   //!
   TBranch        *b_dau2eta_AntiXi;   //!
   TBranch        *b_dau2pt_AntiXi;   //!
   TBranch        *b_dau2px_AntiXi;   //!
   TBranch        *b_dau2py_AntiXi;   //!
   TBranch        *b_dau2pz_AntiXi;   //!
   TBranch        *b_dau2tpc_AntiXi;   //!
   TBranch        *b_dau2ssd_AntiXi;   //!
   TBranch        *b_dau2svt_AntiXi;   //!
   TBranch        *b_dau2tofflag_AntiXi;   //!
   TBranch        *b_dau2tof_AntiXi;   //!
   TBranch        *b_dau2pathlen_AntiXi;   //!
   TBranch        *b_dca1to2_AntiXi;   //!
   TBranch        *b_bachid_AntiXi;   //!
   TBranch        *b_bachdca_AntiXi;   //!
   TBranch        *b_bachdca2d_AntiXi;   //!
   TBranch        *b_bachnhits_AntiXi;   //!
   TBranch        *b_bachdedx_AntiXi;   //!
   TBranch        *b_bachnsigma_AntiXi;   //!
   TBranch        *b_bacheta_AntiXi;   //!
   TBranch        *b_bachpt_AntiXi;   //!
   TBranch        *b_bachpx_AntiXi;   //!
   TBranch        *b_bachpy_AntiXi;   //!
   TBranch        *b_bachpz_AntiXi;   //!
   TBranch        *b_bachtpc_AntiXi;   //!
   TBranch        *b_bachssd_AntiXi;   //!
   TBranch        *b_bachsvt_AntiXi;   //!
   TBranch        *b_bachtofflag_AntiXi;   //!
   TBranch        *b_bachtof_AntiXi;   //!
   TBranch        *b_bachpathlen_AntiXi;   //!
   TBranch        *b_dcav0tobach_AntiXi;   //!
   TBranch        *b_ximass_AntiXi;   //!
   TBranch        *b_xipt_AntiXi;   //!
   TBranch        *b_xirapidity_AntiXi;   //!
   TBranch        *b_xieta_AntiXi;   //!
   TBranch        *b_xix_AntiXi;   //!
   TBranch        *b_xiy_AntiXi;   //!
   TBranch        *b_xiz_AntiXi;   //!
   TBranch        *b_xipx_AntiXi;   //!
   TBranch        *b_xipy_AntiXi;   //!
   TBranch        *b_xipz_AntiXi;   //!
   TBranch        *b_xideclen_AntiXi;   //!
   TBranch        *b_xidca_AntiXi;   //!
   TBranch        *b_xidca2d_AntiXi;   //!
   TBranch        *b_xisinth_AntiXi;   //!
   TBranch        *b_xipathlen_AntiXi;   //!

   analyze(TTree *tree=0);
   virtual ~analyze();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef analyze_cxx
analyze::analyze(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("782D1E17E22AAA155DC37F6D0C6365A8_99.MultiStrange.picodst.root");
      if (!f) {
         f = new TFile("782D1E17E22AAA155DC37F6D0C6365A8_99.MultiStrange.picodst.root");
      }
      tree = (TTree*)gDirectory->Get("V0PicoDst");

   }
   Init(tree);
}

analyze::~analyze()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t analyze::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t analyze::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void analyze::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runnumber", &runnumber, &b_runnumber);
   fChain->SetBranchAddress("evtnumber", &evtnumber, &b_evtnumber);
   fChain->SetBranchAddress("trgmode", &trgmode, &b_trgmode);
   fChain->SetBranchAddress("nrefmult", &nrefmult, &b_nrefmult);
   fChain->SetBranchAddress("nrefmultTOF", &nrefmultTOF, &b_nrefmultTOF);
   fChain->SetBranchAddress("bbcadcsumeast", &bbcadcsumeast, &b_bbcadcsumeast);
   fChain->SetBranchAddress("zdcadc0", &zdcadc0, &b_zdcadc0);
   fChain->SetBranchAddress("bbccirate", &bbccirate, &b_bbccirate);
   fChain->SetBranchAddress("primvertexX", &primvertexX, &b_primvertexX);
   fChain->SetBranchAddress("primvertexY", &primvertexY, &b_primvertexY);
   fChain->SetBranchAddress("primvertexZ", &primvertexZ, &b_primvertexZ);
   fChain->SetBranchAddress("magn", &magn, &b_magn);
   fChain->SetBranchAddress("nProton", &nProton, &b_nProton);
   fChain->SetBranchAddress("nAntiProton", &nAntiProton, &b_nAntiProton);
   fChain->SetBranchAddress("nLambda", &nLambda, &b_nLambda);
   fChain->SetBranchAddress("nAntiLambda", &nAntiLambda, &b_nAntiLambda);
   fChain->SetBranchAddress("nXi", &nXi, &b_nXi);
   fChain->SetBranchAddress("nAntiXi", &nAntiXi, &b_nAntiXi);
   fChain->SetBranchAddress("id_Proton", id_Proton, &b_id_Proton);
   fChain->SetBranchAddress("nhits_Proton", nhits_Proton, &b_nhits_Proton);
   fChain->SetBranchAddress("nhitsFit_Proton", nhitsFit_Proton, &b_nhitsFit_Proton);
   fChain->SetBranchAddress("dedx_Proton", dedx_Proton, &b_dedx_Proton);
   fChain->SetBranchAddress("nsigmaproton_Proton", nsigmaproton_Proton, &b_nsigmaproton_Proton);
   fChain->SetBranchAddress("nsigmapion_Proton", nsigmapion_Proton, &b_nsigmapion_Proton);
   fChain->SetBranchAddress("nsigmakaon_Proton", nsigmakaon_Proton, &b_nsigmakaon_Proton);
   fChain->SetBranchAddress("nsigmaelectron_Proton", nsigmaelectron_Proton, &b_nsigmaelectron_Proton);
   fChain->SetBranchAddress("pt_Proton", pt_Proton, &b_pt_Proton);
   fChain->SetBranchAddress("rapidity_Proton", rapidity_Proton, &b_rapidity_Proton);
   fChain->SetBranchAddress("eta_Proton", eta_Proton, &b_eta_Proton);
   fChain->SetBranchAddress("x_Proton", x_Proton, &b_x_Proton);
   fChain->SetBranchAddress("y_Proton", y_Proton, &b_y_Proton);
   fChain->SetBranchAddress("z_Proton", z_Proton, &b_z_Proton);
   fChain->SetBranchAddress("px_Proton", px_Proton, &b_px_Proton);
   fChain->SetBranchAddress("py_Proton", py_Proton, &b_py_Proton);
   fChain->SetBranchAddress("pz_Proton", pz_Proton, &b_pz_Proton);
   fChain->SetBranchAddress("dca_Proton", dca_Proton, &b_dca_Proton);
   fChain->SetBranchAddress("dca2d_Proton", dca2d_Proton, &b_dca2d_Proton);
   fChain->SetBranchAddress("tofflag_Proton", tofflag_Proton, &b_tofflag_Proton);
   fChain->SetBranchAddress("tof_Proton", tof_Proton, &b_tof_Proton);
   fChain->SetBranchAddress("tofpathlen_Proton", tofpathlen_Proton, &b_tofpathlen_Proton);
   fChain->SetBranchAddress("pathlen_Proton", pathlen_Proton, &b_pathlen_Proton);
   fChain->SetBranchAddress("primaryflag_Proton", primaryflag_Proton, &b_primaryflag_Proton);
   fChain->SetBranchAddress("px_primary_Proton", px_primary_Proton, &b_px_primary_Proton);
   fChain->SetBranchAddress("py_primary_Proton", py_primary_Proton, &b_py_primary_Proton);
   fChain->SetBranchAddress("pz_primary_Proton", pz_primary_Proton, &b_pz_primary_Proton);
   fChain->SetBranchAddress("id_AntiProton", id_AntiProton, &b_id_AntiProton);
   fChain->SetBranchAddress("nhits_AntiProton", nhits_AntiProton, &b_nhits_AntiProton);
   fChain->SetBranchAddress("nhitsFit_AntiProton", nhitsFit_AntiProton, &b_nhitsFit_AntiProton);
   fChain->SetBranchAddress("dedx_AntiProton", dedx_AntiProton, &b_dedx_AntiProton);
   fChain->SetBranchAddress("nsigmaproton_AntiProton", nsigmaproton_AntiProton, &b_nsigmaproton_AntiProton);
   fChain->SetBranchAddress("nsigmapion_AntiProton", nsigmapion_AntiProton, &b_nsigmapion_AntiProton);
   fChain->SetBranchAddress("nsigmakaon_AntiProton", nsigmakaon_AntiProton, &b_nsigmakaon_AntiProton);
   fChain->SetBranchAddress("nsigmaelectron_AntiProton", nsigmaelectron_AntiProton, &b_nsigmaelectron_AntiProton);
   fChain->SetBranchAddress("pt_AntiProton", pt_AntiProton, &b_pt_AntiProton);
   fChain->SetBranchAddress("rapidity_AntiProton", rapidity_AntiProton, &b_rapidity_AntiProton);
   fChain->SetBranchAddress("eta_AntiProton", eta_AntiProton, &b_eta_AntiProton);
   fChain->SetBranchAddress("x_AntiProton", x_AntiProton, &b_x_AntiProton);
   fChain->SetBranchAddress("y_AntiProton", y_AntiProton, &b_y_AntiProton);
   fChain->SetBranchAddress("z_AntiProton", z_AntiProton, &b_z_AntiProton);
   fChain->SetBranchAddress("px_AntiProton", px_AntiProton, &b_px_AntiProton);
   fChain->SetBranchAddress("py_AntiProton", py_AntiProton, &b_py_AntiProton);
   fChain->SetBranchAddress("pz_AntiProton", pz_AntiProton, &b_pz_AntiProton);
   fChain->SetBranchAddress("dca_AntiProton", dca_AntiProton, &b_dca_AntiProton);
   fChain->SetBranchAddress("dca2d_AntiProton", dca2d_AntiProton, &b_dca2d_AntiProton);
   fChain->SetBranchAddress("tofflag_AntiProton", tofflag_AntiProton, &b_tofflag_AntiProton);
   fChain->SetBranchAddress("tof_AntiProton", tof_AntiProton, &b_tof_AntiProton);
   fChain->SetBranchAddress("tofpathlen_AntiProton", tofpathlen_AntiProton, &b_tofpathlen_AntiProton);
   fChain->SetBranchAddress("pathlen_AntiProton", pathlen_AntiProton, &b_pathlen_AntiProton);
   fChain->SetBranchAddress("primaryflag_AntiProton", primaryflag_AntiProton, &b_primaryflag_AntiProton);
   fChain->SetBranchAddress("px_primary_AntiProton", px_primary_AntiProton, &b_px_primary_AntiProton);
   fChain->SetBranchAddress("py_primary_AntiProton", py_primary_AntiProton, &b_py_primary_AntiProton);
   fChain->SetBranchAddress("pz_primary_AntiProton", pz_primary_AntiProton, &b_pz_primary_AntiProton);
   fChain->SetBranchAddress("v0mass_Lambda", v0mass_Lambda, &b_v0mass_Lambda);
   fChain->SetBranchAddress("v0pt_Lambda", v0pt_Lambda, &b_v0pt_Lambda);
   fChain->SetBranchAddress("v0rapidity_Lambda", v0rapidity_Lambda, &b_v0rapidity_Lambda);
   fChain->SetBranchAddress("v0eta_Lambda", v0eta_Lambda, &b_v0eta_Lambda);
   fChain->SetBranchAddress("v0x_Lambda", v0x_Lambda, &b_v0x_Lambda);
   fChain->SetBranchAddress("v0y_Lambda", v0y_Lambda, &b_v0y_Lambda);
   fChain->SetBranchAddress("v0z_Lambda", v0z_Lambda, &b_v0z_Lambda);
   fChain->SetBranchAddress("v0px_Lambda", v0px_Lambda, &b_v0px_Lambda);
   fChain->SetBranchAddress("v0py_Lambda", v0py_Lambda, &b_v0py_Lambda);
   fChain->SetBranchAddress("v0pz_Lambda", v0pz_Lambda, &b_v0pz_Lambda);
   fChain->SetBranchAddress("v0declen_Lambda", v0declen_Lambda, &b_v0declen_Lambda);
   fChain->SetBranchAddress("v0dca_Lambda", v0dca_Lambda, &b_v0dca_Lambda);
   fChain->SetBranchAddress("v0dca2d_Lambda", v0dca2d_Lambda, &b_v0dca2d_Lambda);
   fChain->SetBranchAddress("v0pathlen_Lambda", v0pathlen_Lambda, &b_v0pathlen_Lambda);
   fChain->SetBranchAddress("dau1id_Lambda", dau1id_Lambda, &b_dau1id_Lambda);
   fChain->SetBranchAddress("dau2id_Lambda", dau2id_Lambda, &b_dau2id_Lambda);
   fChain->SetBranchAddress("dau1dca_Lambda", dau1dca_Lambda, &b_dau1dca_Lambda);
   fChain->SetBranchAddress("dau1dca2d_Lambda", dau1dca2d_Lambda, &b_dau1dca2d_Lambda);
   fChain->SetBranchAddress("dau1nhits_Lambda", dau1nhits_Lambda, &b_dau1nhits_Lambda);
   fChain->SetBranchAddress("dau1dedx_Lambda", dau1dedx_Lambda, &b_dau1dedx_Lambda);
   fChain->SetBranchAddress("dau1nsigma_Lambda", dau1nsigma_Lambda, &b_dau1nsigma_Lambda);
   fChain->SetBranchAddress("dau1eta_Lambda", dau1eta_Lambda, &b_dau1eta_Lambda);
   fChain->SetBranchAddress("dau1pt_Lambda", dau1pt_Lambda, &b_dau1pt_Lambda);
   fChain->SetBranchAddress("dau1px_Lambda", dau1px_Lambda, &b_dau1px_Lambda);
   fChain->SetBranchAddress("dau1py_Lambda", dau1py_Lambda, &b_dau1py_Lambda);
   fChain->SetBranchAddress("dau1pz_Lambda", dau1pz_Lambda, &b_dau1pz_Lambda);
   fChain->SetBranchAddress("dau1tpc_Lambda", dau1tpc_Lambda, &b_dau1tpc_Lambda);
   fChain->SetBranchAddress("dau1ssd_Lambda", dau1ssd_Lambda, &b_dau1ssd_Lambda);
   fChain->SetBranchAddress("dau1svt_Lambda", dau1svt_Lambda, &b_dau1svt_Lambda);
   fChain->SetBranchAddress("dau1tofflag_Lambda", dau1tofflag_Lambda, &b_dau1tofflag_Lambda);
   fChain->SetBranchAddress("dau1tof_Lambda", dau1tof_Lambda, &b_dau1tof_Lambda);
   fChain->SetBranchAddress("dau1pathlen_Lambda", dau1pathlen_Lambda, &b_dau1pathlen_Lambda);
   fChain->SetBranchAddress("dau2dca_Lambda", dau2dca_Lambda, &b_dau2dca_Lambda);
   fChain->SetBranchAddress("dau2dca2d_Lambda", dau2dca2d_Lambda, &b_dau2dca2d_Lambda);
   fChain->SetBranchAddress("dau2nhits_Lambda", dau2nhits_Lambda, &b_dau2nhits_Lambda);
   fChain->SetBranchAddress("dau2dedx_Lambda", dau2dedx_Lambda, &b_dau2dedx_Lambda);
   fChain->SetBranchAddress("dau2nsigma_Lambda", dau2nsigma_Lambda, &b_dau2nsigma_Lambda);
   fChain->SetBranchAddress("dau2eta_Lambda", dau2eta_Lambda, &b_dau2eta_Lambda);
   fChain->SetBranchAddress("dau2pt_Lambda", dau2pt_Lambda, &b_dau2pt_Lambda);
   fChain->SetBranchAddress("dau2px_Lambda", dau2px_Lambda, &b_dau2px_Lambda);
   fChain->SetBranchAddress("dau2py_Lambda", dau2py_Lambda, &b_dau2py_Lambda);
   fChain->SetBranchAddress("dau2pz_Lambda", dau2pz_Lambda, &b_dau2pz_Lambda);
   fChain->SetBranchAddress("dau2tpc_Lambda", dau2tpc_Lambda, &b_dau2tpc_Lambda);
   fChain->SetBranchAddress("dau2ssd_Lambda", dau2ssd_Lambda, &b_dau2ssd_Lambda);
   fChain->SetBranchAddress("dau2svt_Lambda", dau2svt_Lambda, &b_dau2svt_Lambda);
   fChain->SetBranchAddress("dau2tofflag_Lambda", dau2tofflag_Lambda, &b_dau2tofflag_Lambda);
   fChain->SetBranchAddress("dau2tof_Lambda", dau2tof_Lambda, &b_dau2tof_Lambda);
   fChain->SetBranchAddress("dau2pathlen_Lambda", dau2pathlen_Lambda, &b_dau2pathlen_Lambda);
   fChain->SetBranchAddress("dca1to2_Lambda", dca1to2_Lambda, &b_dca1to2_Lambda);
   fChain->SetBranchAddress("Lambdaflag", Lambdaflag, &b_Lambdaflag);
   fChain->SetBranchAddress("v0mass_AntiLambda", v0mass_AntiLambda, &b_v0mass_AntiLambda);
   fChain->SetBranchAddress("v0pt_AntiLambda", v0pt_AntiLambda, &b_v0pt_AntiLambda);
   fChain->SetBranchAddress("v0rapidity_AntiLambda", v0rapidity_AntiLambda, &b_v0rapidity_AntiLambda);
   fChain->SetBranchAddress("v0eta_AntiLambda", v0eta_AntiLambda, &b_v0eta_AntiLambda);
   fChain->SetBranchAddress("v0x_AntiLambda", v0x_AntiLambda, &b_v0x_AntiLambda);
   fChain->SetBranchAddress("v0y_AntiLambda", v0y_AntiLambda, &b_v0y_AntiLambda);
   fChain->SetBranchAddress("v0z_AntiLambda", v0z_AntiLambda, &b_v0z_AntiLambda);
   fChain->SetBranchAddress("v0px_AntiLambda", v0px_AntiLambda, &b_v0px_AntiLambda);
   fChain->SetBranchAddress("v0py_AntiLambda", v0py_AntiLambda, &b_v0py_AntiLambda);
   fChain->SetBranchAddress("v0pz_AntiLambda", v0pz_AntiLambda, &b_v0pz_AntiLambda);
   fChain->SetBranchAddress("v0declen_AntiLambda", v0declen_AntiLambda, &b_v0declen_AntiLambda);
   fChain->SetBranchAddress("v0dca_AntiLambda", v0dca_AntiLambda, &b_v0dca_AntiLambda);
   fChain->SetBranchAddress("v0dca2d_AntiLambda", v0dca2d_AntiLambda, &b_v0dca2d_AntiLambda);
   fChain->SetBranchAddress("v0pathlen_AntiLambda", v0pathlen_AntiLambda, &b_v0pathlen_AntiLambda);
   fChain->SetBranchAddress("dau1id_AntiLambda", dau1id_AntiLambda, &b_dau1id_AntiLambda);
   fChain->SetBranchAddress("dau2id_AntiLambda", dau2id_AntiLambda, &b_dau2id_AntiLambda);
   fChain->SetBranchAddress("dau1dca_AntiLambda", dau1dca_AntiLambda, &b_dau1dca_AntiLambda);
   fChain->SetBranchAddress("dau1dca2d_AntiLambda", dau1dca2d_AntiLambda, &b_dau1dca2d_AntiLambda);
   fChain->SetBranchAddress("dau1nhits_AntiLambda", dau1nhits_AntiLambda, &b_dau1nhits_AntiLambda);
   fChain->SetBranchAddress("dau1dedx_AntiLambda", dau1dedx_AntiLambda, &b_dau1dedx_AntiLambda);
   fChain->SetBranchAddress("dau1nsigma_AntiLambda", dau1nsigma_AntiLambda, &b_dau1nsigma_AntiLambda);
   fChain->SetBranchAddress("dau1eta_AntiLambda", dau1eta_AntiLambda, &b_dau1eta_AntiLambda);
   fChain->SetBranchAddress("dau1pt_AntiLambda", dau1pt_AntiLambda, &b_dau1pt_AntiLambda);
   fChain->SetBranchAddress("dau1px_AntiLambda", dau1px_AntiLambda, &b_dau1px_AntiLambda);
   fChain->SetBranchAddress("dau1py_AntiLambda", dau1py_AntiLambda, &b_dau1py_AntiLambda);
   fChain->SetBranchAddress("dau1pz_AntiLambda", dau1pz_AntiLambda, &b_dau1pz_AntiLambda);
   fChain->SetBranchAddress("dau1tpc_AntiLambda", dau1tpc_AntiLambda, &b_dau1tpc_AntiLambda);
   fChain->SetBranchAddress("dau1ssd_AntiLambda", dau1ssd_AntiLambda, &b_dau1ssd_AntiLambda);
   fChain->SetBranchAddress("dau1svt_AntiLambda", dau1svt_AntiLambda, &b_dau1svt_AntiLambda);
   fChain->SetBranchAddress("dau1tofflag_AntiLambda", dau1tofflag_AntiLambda, &b_dau1tofflag_AntiLambda);
   fChain->SetBranchAddress("dau1tof_AntiLambda", dau1tof_AntiLambda, &b_dau1tof_AntiLambda);
   fChain->SetBranchAddress("dau1pathlen_AntiLambda", dau1pathlen_AntiLambda, &b_dau1pathlen_AntiLambda);
   fChain->SetBranchAddress("dau2dca_AntiLambda", dau2dca_AntiLambda, &b_dau2dca_AntiLambda);
   fChain->SetBranchAddress("dau2dca2d_AntiLambda", dau2dca2d_AntiLambda, &b_dau2dca2d_AntiLambda);
   fChain->SetBranchAddress("dau2nhits_AntiLambda", dau2nhits_AntiLambda, &b_dau2nhits_AntiLambda);
   fChain->SetBranchAddress("dau2dedx_AntiLambda", dau2dedx_AntiLambda, &b_dau2dedx_AntiLambda);
   fChain->SetBranchAddress("dau2nsigma_AntiLambda", dau2nsigma_AntiLambda, &b_dau2nsigma_AntiLambda);
   fChain->SetBranchAddress("dau2eta_AntiLambda", dau2eta_AntiLambda, &b_dau2eta_AntiLambda);
   fChain->SetBranchAddress("dau2pt_AntiLambda", dau2pt_AntiLambda, &b_dau2pt_AntiLambda);
   fChain->SetBranchAddress("dau2px_AntiLambda", dau2px_AntiLambda, &b_dau2px_AntiLambda);
   fChain->SetBranchAddress("dau2py_AntiLambda", dau2py_AntiLambda, &b_dau2py_AntiLambda);
   fChain->SetBranchAddress("dau2pz_AntiLambda", dau2pz_AntiLambda, &b_dau2pz_AntiLambda);
   fChain->SetBranchAddress("dau2tpc_AntiLambda", dau2tpc_AntiLambda, &b_dau2tpc_AntiLambda);
   fChain->SetBranchAddress("dau2ssd_AntiLambda", dau2ssd_AntiLambda, &b_dau2ssd_AntiLambda);
   fChain->SetBranchAddress("dau2svt_AntiLambda", dau2svt_AntiLambda, &b_dau2svt_AntiLambda);
   fChain->SetBranchAddress("dau2tofflag_AntiLambda", dau2tofflag_AntiLambda, &b_dau2tofflag_AntiLambda);
   fChain->SetBranchAddress("dau2tof_AntiLambda", dau2tof_AntiLambda, &b_dau2tof_AntiLambda);
   fChain->SetBranchAddress("dau2pathlen_AntiLambda", dau2pathlen_AntiLambda, &b_dau2pathlen_AntiLambda);
   fChain->SetBranchAddress("dca1to2_AntiLambda", dca1to2_AntiLambda, &b_dca1to2_AntiLambda);
   fChain->SetBranchAddress("AntiLambdaflag", AntiLambdaflag, &b_AntiLambdaflag);
   fChain->SetBranchAddress("v0mass_Xi", v0mass_Xi, &b_v0mass_Xi);
   fChain->SetBranchAddress("v0pt_Xi", v0pt_Xi, &b_v0pt_Xi);
   fChain->SetBranchAddress("v0rapidity_Xi", v0rapidity_Xi, &b_v0rapidity_Xi);
   fChain->SetBranchAddress("v0eta_Xi", v0eta_Xi, &b_v0eta_Xi);
   fChain->SetBranchAddress("v0x_Xi", v0x_Xi, &b_v0x_Xi);
   fChain->SetBranchAddress("v0y_Xi", v0y_Xi, &b_v0y_Xi);
   fChain->SetBranchAddress("v0z_Xi", v0z_Xi, &b_v0z_Xi);
   fChain->SetBranchAddress("v0px_Xi", v0px_Xi, &b_v0px_Xi);
   fChain->SetBranchAddress("v0py_Xi", v0py_Xi, &b_v0py_Xi);
   fChain->SetBranchAddress("v0pz_Xi", v0pz_Xi, &b_v0pz_Xi);
   fChain->SetBranchAddress("v0declen_Xi", v0declen_Xi, &b_v0declen_Xi);
   fChain->SetBranchAddress("v0dca_Xi", v0dca_Xi, &b_v0dca_Xi);
   fChain->SetBranchAddress("v0dca2d_Xi", v0dca2d_Xi, &b_v0dca2d_Xi);
   fChain->SetBranchAddress("v0pathlen_Xi", v0pathlen_Xi, &b_v0pathlen_Xi);
   fChain->SetBranchAddress("dau1id_Xi", dau1id_Xi, &b_dau1id_Xi);
   fChain->SetBranchAddress("dau1dca_Xi", dau1dca_Xi, &b_dau1dca_Xi);
   fChain->SetBranchAddress("dau1dca2d_Xi", dau1dca2d_Xi, &b_dau1dca2d_Xi);
   fChain->SetBranchAddress("dau1nhits_Xi", dau1nhits_Xi, &b_dau1nhits_Xi);
   fChain->SetBranchAddress("dau1dedx_Xi", dau1dedx_Xi, &b_dau1dedx_Xi);
   fChain->SetBranchAddress("dau1nsigma_Xi", dau1nsigma_Xi, &b_dau1nsigma_Xi);
   fChain->SetBranchAddress("dau1eta_Xi", dau1eta_Xi, &b_dau1eta_Xi);
   fChain->SetBranchAddress("dau1pt_Xi", dau1pt_Xi, &b_dau1pt_Xi);
   fChain->SetBranchAddress("dau1px_Xi", dau1px_Xi, &b_dau1px_Xi);
   fChain->SetBranchAddress("dau1py_Xi", dau1py_Xi, &b_dau1py_Xi);
   fChain->SetBranchAddress("dau1pz_Xi", dau1pz_Xi, &b_dau1pz_Xi);
   fChain->SetBranchAddress("dau1tpc_Xi", dau1tpc_Xi, &b_dau1tpc_Xi);
   fChain->SetBranchAddress("dau1ssd_Xi", dau1ssd_Xi, &b_dau1ssd_Xi);
   fChain->SetBranchAddress("dau1svt_Xi", dau1svt_Xi, &b_dau1svt_Xi);
   fChain->SetBranchAddress("dau1tofflag_Xi", dau1tofflag_Xi, &b_dau1tofflag_Xi);
   fChain->SetBranchAddress("dau1tof_Xi", dau1tof_Xi, &b_dau1tof_Xi);
   fChain->SetBranchAddress("dau1pathlen_Xi", dau1pathlen_Xi, &b_dau1pathlen_Xi);
   fChain->SetBranchAddress("dau2id_Xi", dau2id_Xi, &b_dau2id_Xi);
   fChain->SetBranchAddress("dau2dca_Xi", dau2dca_Xi, &b_dau2dca_Xi);
   fChain->SetBranchAddress("dau2dca2d_Xi", dau2dca2d_Xi, &b_dau2dca2d_Xi);
   fChain->SetBranchAddress("dau2nhits_Xi", dau2nhits_Xi, &b_dau2nhits_Xi);
   fChain->SetBranchAddress("dau2dedx_Xi", dau2dedx_Xi, &b_dau2dedx_Xi);
   fChain->SetBranchAddress("dau2nsigma_Xi", dau2nsigma_Xi, &b_dau2nsigma_Xi);
   fChain->SetBranchAddress("dau2eta_Xi", dau2eta_Xi, &b_dau2eta_Xi);
   fChain->SetBranchAddress("dau2pt_Xi", dau2pt_Xi, &b_dau2pt_Xi);
   fChain->SetBranchAddress("dau2px_Xi", dau2px_Xi, &b_dau2px_Xi);
   fChain->SetBranchAddress("dau2py_Xi", dau2py_Xi, &b_dau2py_Xi);
   fChain->SetBranchAddress("dau2pz_Xi", dau2pz_Xi, &b_dau2pz_Xi);
   fChain->SetBranchAddress("dau2tpc_Xi", dau2tpc_Xi, &b_dau2tpc_Xi);
   fChain->SetBranchAddress("dau2ssd_Xi", dau2ssd_Xi, &b_dau2ssd_Xi);
   fChain->SetBranchAddress("dau2svt_Xi", dau2svt_Xi, &b_dau2svt_Xi);
   fChain->SetBranchAddress("dau2tofflag_Xi", dau2tofflag_Xi, &b_dau2tofflag_Xi);
   fChain->SetBranchAddress("dau2tof_Xi", dau2tof_Xi, &b_dau2tof_Xi);
   fChain->SetBranchAddress("dau2pathlen_Xi", dau2pathlen_Xi, &b_dau2pathlen_Xi);
   fChain->SetBranchAddress("dca1to2_Xi", dca1to2_Xi, &b_dca1to2_Xi);
   fChain->SetBranchAddress("bachid_Xi", bachid_Xi, &b_bachid_Xi);
   fChain->SetBranchAddress("bachdca_Xi", bachdca_Xi, &b_bachdca_Xi);
   fChain->SetBranchAddress("bachdca2d_Xi", bachdca2d_Xi, &b_bachdca2d_Xi);
   fChain->SetBranchAddress("bachnhits_Xi", bachnhits_Xi, &b_bachnhits_Xi);
   fChain->SetBranchAddress("bachdedx_Xi", bachdedx_Xi, &b_bachdedx_Xi);
   fChain->SetBranchAddress("bachnsigma_Xi", bachnsigma_Xi, &b_bachnsigma_Xi);
   fChain->SetBranchAddress("bacheta_Xi", bacheta_Xi, &b_bacheta_Xi);
   fChain->SetBranchAddress("bachpt_Xi", bachpt_Xi, &b_bachpt_Xi);
   fChain->SetBranchAddress("bachpx_Xi", bachpx_Xi, &b_bachpx_Xi);
   fChain->SetBranchAddress("bachpy_Xi", bachpy_Xi, &b_bachpy_Xi);
   fChain->SetBranchAddress("bachpz_Xi", bachpz_Xi, &b_bachpz_Xi);
   fChain->SetBranchAddress("bachtpc_Xi", bachtpc_Xi, &b_bachtpc_Xi);
   fChain->SetBranchAddress("bachssd_Xi", bachssd_Xi, &b_bachssd_Xi);
   fChain->SetBranchAddress("bachsvt_Xi", bachsvt_Xi, &b_bachsvt_Xi);
   fChain->SetBranchAddress("bachtofflag_Xi", bachtofflag_Xi, &b_bachtofflag_Xi);
   fChain->SetBranchAddress("bachtof_Xi", bachtof_Xi, &b_bachtof_Xi);
   fChain->SetBranchAddress("bachpathlen_Xi", bachpathlen_Xi, &b_bachpathlen_Xi);
   fChain->SetBranchAddress("dcav0tobach_Xi", dcav0tobach_Xi, &b_dcav0tobach_Xi);
   fChain->SetBranchAddress("ximass_Xi", ximass_Xi, &b_ximass_Xi);
   fChain->SetBranchAddress("xipt_Xi", xipt_Xi, &b_xipt_Xi);
   fChain->SetBranchAddress("xirapidity_Xi", xirapidity_Xi, &b_xirapidity_Xi);
   fChain->SetBranchAddress("xieta_Xi", xieta_Xi, &b_xieta_Xi);
   fChain->SetBranchAddress("xix_Xi", xix_Xi, &b_xix_Xi);
   fChain->SetBranchAddress("xiy_Xi", xiy_Xi, &b_xiy_Xi);
   fChain->SetBranchAddress("xiz_Xi", xiz_Xi, &b_xiz_Xi);
   fChain->SetBranchAddress("xipx_Xi", xipx_Xi, &b_xipx_Xi);
   fChain->SetBranchAddress("xipy_Xi", xipy_Xi, &b_xipy_Xi);
   fChain->SetBranchAddress("xipz_Xi", xipz_Xi, &b_xipz_Xi);
   fChain->SetBranchAddress("xideclen_Xi", xideclen_Xi, &b_xideclen_Xi);
   fChain->SetBranchAddress("xidca_Xi", xidca_Xi, &b_xidca_Xi);
   fChain->SetBranchAddress("xidca2d_Xi", xidca2d_Xi, &b_xidca2d_Xi);
   fChain->SetBranchAddress("xisinth_Xi", xisinth_Xi, &b_xisinth_Xi);
   fChain->SetBranchAddress("xipathlen_Xi", xipathlen_Xi, &b_xipathlen_Xi);
   fChain->SetBranchAddress("v0mass_AntiXi", v0mass_AntiXi, &b_v0mass_AntiXi);
   fChain->SetBranchAddress("v0pt_AntiXi", v0pt_AntiXi, &b_v0pt_AntiXi);
   fChain->SetBranchAddress("v0rapidity_AntiXi", v0rapidity_AntiXi, &b_v0rapidity_AntiXi);
   fChain->SetBranchAddress("v0eta_AntiXi", v0eta_AntiXi, &b_v0eta_AntiXi);
   fChain->SetBranchAddress("v0x_AntiXi", v0x_AntiXi, &b_v0x_AntiXi);
   fChain->SetBranchAddress("v0y_AntiXi", v0y_AntiXi, &b_v0y_AntiXi);
   fChain->SetBranchAddress("v0z_AntiXi", v0z_AntiXi, &b_v0z_AntiXi);
   fChain->SetBranchAddress("v0px_AntiXi", v0px_AntiXi, &b_v0px_AntiXi);
   fChain->SetBranchAddress("v0py_AntiXi", v0py_AntiXi, &b_v0py_AntiXi);
   fChain->SetBranchAddress("v0pz_AntiXi", v0pz_AntiXi, &b_v0pz_AntiXi);
   fChain->SetBranchAddress("v0declen_AntiXi", v0declen_AntiXi, &b_v0declen_AntiXi);
   fChain->SetBranchAddress("v0dca_AntiXi", v0dca_AntiXi, &b_v0dca_AntiXi);
   fChain->SetBranchAddress("v0dca2d_AntiXi", v0dca2d_AntiXi, &b_v0dca2d_AntiXi);
   fChain->SetBranchAddress("v0pathlen_AntiXi", v0pathlen_AntiXi, &b_v0pathlen_AntiXi);
   fChain->SetBranchAddress("dau1id_AntiXi", dau1id_AntiXi, &b_dau1id_AntiXi);
   fChain->SetBranchAddress("dau1dca_AntiXi", dau1dca_AntiXi, &b_dau1dca_AntiXi);
   fChain->SetBranchAddress("dau1dca2d_AntiXi", dau1dca2d_AntiXi, &b_dau1dca2d_AntiXi);
   fChain->SetBranchAddress("dau1nhits_AntiXi", dau1nhits_AntiXi, &b_dau1nhits_AntiXi);
   fChain->SetBranchAddress("dau1dedx_AntiXi", dau1dedx_AntiXi, &b_dau1dedx_AntiXi);
   fChain->SetBranchAddress("dau1nsigma_AntiXi", dau1nsigma_AntiXi, &b_dau1nsigma_AntiXi);
   fChain->SetBranchAddress("dau1eta_AntiXi", dau1eta_AntiXi, &b_dau1eta_AntiXi);
   fChain->SetBranchAddress("dau1pt_AntiXi", dau1pt_AntiXi, &b_dau1pt_AntiXi);
   fChain->SetBranchAddress("dau1px_AntiXi", dau1px_AntiXi, &b_dau1px_AntiXi);
   fChain->SetBranchAddress("dau1py_AntiXi", dau1py_AntiXi, &b_dau1py_AntiXi);
   fChain->SetBranchAddress("dau1pz_AntiXi", dau1pz_AntiXi, &b_dau1pz_AntiXi);
   fChain->SetBranchAddress("dau1tpc_AntiXi", dau1tpc_AntiXi, &b_dau1tpc_AntiXi);
   fChain->SetBranchAddress("dau1ssd_AntiXi", dau1ssd_AntiXi, &b_dau1ssd_AntiXi);
   fChain->SetBranchAddress("dau1svt_AntiXi", dau1svt_AntiXi, &b_dau1svt_AntiXi);
   fChain->SetBranchAddress("dau1tofflag_AntiXi", dau1tofflag_AntiXi, &b_dau1tofflag_AntiXi);
   fChain->SetBranchAddress("dau1tof_AntiXi", dau1tof_AntiXi, &b_dau1tof_AntiXi);
   fChain->SetBranchAddress("dau1pathlen_AntiXi", dau1pathlen_AntiXi, &b_dau1pathlen_AntiXi);
   fChain->SetBranchAddress("dau2id_AntiXi", dau2id_AntiXi, &b_dau2id_AntiXi);
   fChain->SetBranchAddress("dau2dca_AntiXi", dau2dca_AntiXi, &b_dau2dca_AntiXi);
   fChain->SetBranchAddress("dau2dca2d_AntiXi", dau2dca2d_AntiXi, &b_dau2dca2d_AntiXi);
   fChain->SetBranchAddress("dau2nhits_AntiXi", dau2nhits_AntiXi, &b_dau2nhits_AntiXi);
   fChain->SetBranchAddress("dau2dedx_AntiXi", dau2dedx_AntiXi, &b_dau2dedx_AntiXi);
   fChain->SetBranchAddress("dau2nsigma_AntiXi", dau2nsigma_AntiXi, &b_dau2nsigma_AntiXi);
   fChain->SetBranchAddress("dau2eta_AntiXi", dau2eta_AntiXi, &b_dau2eta_AntiXi);
   fChain->SetBranchAddress("dau2pt_AntiXi", dau2pt_AntiXi, &b_dau2pt_AntiXi);
   fChain->SetBranchAddress("dau2px_AntiXi", dau2px_AntiXi, &b_dau2px_AntiXi);
   fChain->SetBranchAddress("dau2py_AntiXi", dau2py_AntiXi, &b_dau2py_AntiXi);
   fChain->SetBranchAddress("dau2pz_AntiXi", dau2pz_AntiXi, &b_dau2pz_AntiXi);
   fChain->SetBranchAddress("dau2tpc_AntiXi", dau2tpc_AntiXi, &b_dau2tpc_AntiXi);
   fChain->SetBranchAddress("dau2ssd_AntiXi", dau2ssd_AntiXi, &b_dau2ssd_AntiXi);
   fChain->SetBranchAddress("dau2svt_AntiXi", dau2svt_AntiXi, &b_dau2svt_AntiXi);
   fChain->SetBranchAddress("dau2tofflag_AntiXi", dau2tofflag_AntiXi, &b_dau2tofflag_AntiXi);
   fChain->SetBranchAddress("dau2tof_AntiXi", dau2tof_AntiXi, &b_dau2tof_AntiXi);
   fChain->SetBranchAddress("dau2pathlen_AntiXi", dau2pathlen_AntiXi, &b_dau2pathlen_AntiXi);
   fChain->SetBranchAddress("dca1to2_AntiXi", dca1to2_AntiXi, &b_dca1to2_AntiXi);
   fChain->SetBranchAddress("bachid_AntiXi", bachid_AntiXi, &b_bachid_AntiXi);
   fChain->SetBranchAddress("bachdca_AntiXi", bachdca_AntiXi, &b_bachdca_AntiXi);
   fChain->SetBranchAddress("bachdca2d_AntiXi", bachdca2d_AntiXi, &b_bachdca2d_AntiXi);
   fChain->SetBranchAddress("bachnhits_AntiXi", bachnhits_AntiXi, &b_bachnhits_AntiXi);
   fChain->SetBranchAddress("bachdedx_AntiXi", bachdedx_AntiXi, &b_bachdedx_AntiXi);
   fChain->SetBranchAddress("bachnsigma_AntiXi", bachnsigma_AntiXi, &b_bachnsigma_AntiXi);
   fChain->SetBranchAddress("bacheta_AntiXi", bacheta_AntiXi, &b_bacheta_AntiXi);
   fChain->SetBranchAddress("bachpt_AntiXi", bachpt_AntiXi, &b_bachpt_AntiXi);
   fChain->SetBranchAddress("bachpx_AntiXi", bachpx_AntiXi, &b_bachpx_AntiXi);
   fChain->SetBranchAddress("bachpy_AntiXi", bachpy_AntiXi, &b_bachpy_AntiXi);
   fChain->SetBranchAddress("bachpz_AntiXi", bachpz_AntiXi, &b_bachpz_AntiXi);
   fChain->SetBranchAddress("bachtpc_AntiXi", bachtpc_AntiXi, &b_bachtpc_AntiXi);
   fChain->SetBranchAddress("bachssd_AntiXi", bachssd_AntiXi, &b_bachssd_AntiXi);
   fChain->SetBranchAddress("bachsvt_AntiXi", bachsvt_AntiXi, &b_bachsvt_AntiXi);
   fChain->SetBranchAddress("bachtofflag_AntiXi", bachtofflag_AntiXi, &b_bachtofflag_AntiXi);
   fChain->SetBranchAddress("bachtof_AntiXi", bachtof_AntiXi, &b_bachtof_AntiXi);
   fChain->SetBranchAddress("bachpathlen_AntiXi", bachpathlen_AntiXi, &b_bachpathlen_AntiXi);
   fChain->SetBranchAddress("dcav0tobach_AntiXi", dcav0tobach_AntiXi, &b_dcav0tobach_AntiXi);
   fChain->SetBranchAddress("ximass_AntiXi", ximass_AntiXi, &b_ximass_AntiXi);
   fChain->SetBranchAddress("xipt_AntiXi", xipt_AntiXi, &b_xipt_AntiXi);
   fChain->SetBranchAddress("xirapidity_AntiXi", xirapidity_AntiXi, &b_xirapidity_AntiXi);
   fChain->SetBranchAddress("xieta_AntiXi", xieta_AntiXi, &b_xieta_AntiXi);
   fChain->SetBranchAddress("xix_AntiXi", xix_AntiXi, &b_xix_AntiXi);
   fChain->SetBranchAddress("xiy_AntiXi", xiy_AntiXi, &b_xiy_AntiXi);
   fChain->SetBranchAddress("xiz_AntiXi", xiz_AntiXi, &b_xiz_AntiXi);
   fChain->SetBranchAddress("xipx_AntiXi", xipx_AntiXi, &b_xipx_AntiXi);
   fChain->SetBranchAddress("xipy_AntiXi", xipy_AntiXi, &b_xipy_AntiXi);
   fChain->SetBranchAddress("xipz_AntiXi", xipz_AntiXi, &b_xipz_AntiXi);
   fChain->SetBranchAddress("xideclen_AntiXi", xideclen_AntiXi, &b_xideclen_AntiXi);
   fChain->SetBranchAddress("xidca_AntiXi", xidca_AntiXi, &b_xidca_AntiXi);
   fChain->SetBranchAddress("xidca2d_AntiXi", xidca2d_AntiXi, &b_xidca2d_AntiXi);
   fChain->SetBranchAddress("xisinth_AntiXi", xisinth_AntiXi, &b_xisinth_AntiXi);
   fChain->SetBranchAddress("xipathlen_AntiXi", xipathlen_AntiXi, &b_xipathlen_AntiXi);
   Notify();
}

Bool_t analyze::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void analyze::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t analyze::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef analyze_cxx
