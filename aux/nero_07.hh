//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul 18 13:28:08 2016 by ROOT version 6.06/04
// from TTree events/events
// found on file: NeroNtuples_9.root
//////////////////////////////////////////////////////////

#ifndef nero_07_h
#define nero_07_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TLorentzVector.h"
#include "vector"

using namespace std;
class nero_07 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           isRealData;
   Int_t           runNum;
   Int_t           lumiNum;
   ULong64_t       eventNum;
   Float_t         rho;
   UInt_t          filterSelBits;
   Int_t           npv;
   TClonesArray    *jetP4;
   vector<int>     *jetMatch;
   vector<float>   *jetRawPt;
   vector<float>   *jetRefPt;
   vector<float>   *jetBdiscr;
   vector<float>   *jetBdiscrLegacy;
   vector<float>   *jetPuId;
   vector<float>   *jetUnc;
   vector<float>   *jetQGL;
   vector<int>     *jetQglMult;
   vector<float>   *jetQglPtD;
   vector<float>   *jetQglAxis2;
   vector<int>     *jetFlavour;
   vector<int>     *jetMatchedPartonPdgId;
   vector<int>     *jetMotherPdgId;
   vector<int>     *jetGrMotherPdgId;
   vector<unsigned int> *jetSelBits;
   vector<float>   *jetQ;
   vector<float>   *jetQnoPU;
   vector<float>   *jetPtResUncCentral;
   vector<float>   *jetPtResUncUp;
   vector<float>   *jetPtResUncDown;
   TClonesArray    *jetpuppiP4;
   vector<float>   *jetpuppiRawPt;
   vector<float>   *jetpuppiBdiscr;
   vector<unsigned int> *jetpuppiSelBits;
   vector<float>   *jetpuppiQ;
   TClonesArray    *fatjetAK8CHSP4;
   vector<float>   *fatjetAK8CHSRawPt;
   vector<int>     *fatjetAK8CHSFlavour;
   vector<float>   *fatjetAK8CHSTau1;
   vector<float>   *fatjetAK8CHSTau2;
   vector<float>   *fatjetAK8CHSTau3;
   vector<float>   *fatjetAK8CHSTrimmedMass;
   vector<float>   *fatjetAK8CHSPrunedMass;
   vector<float>   *fatjetAK8CHSCorrectedPrunedMass;
   vector<float>   *fatjetAK8CHSSoftdropMass;
   TClonesArray    *fatjetAK8CHSsubjet;
   vector<int>     *fatjetAK8CHSnSubjets;
   vector<int>     *fatjetAK8CHSfirstSubjet;
   vector<float>   *fatjetAK8CHSsubjet_btag;
   vector<float>   *fatjetAK8CHSHbb;
   vector<float>   *fatjetAK8CHStopMVA;
   TClonesArray    *tauP4;
   vector<int>     *tauMatch;
   vector<unsigned int> *tauSelBits;
   vector<int>     *tauQ;
   vector<float>   *tauM;
   vector<float>   *tauIso;
   vector<float>   *tauChargedIsoPtSum;
   vector<float>   *tauNeutralIsoPtSum;
   vector<float>   *tauIsoDeltaBetaCorr;
   vector<float>   *tauIsoPileupWeightedRaw;
   vector<float>   *tauIsoMva;
   TClonesArray    *lepP4;
   vector<int>     *lepMatch;
   vector<int>     *lepPdgId;
   vector<float>   *lepIso;
   vector<unsigned int> *lepSelBits;
   vector<float>   *lepPfPt;
   vector<float>   *lepMva;
   vector<float>   *lepChIso;
   vector<float>   *lepNhIso;
   vector<float>   *lepPhoIso;
   vector<float>   *lepPuIso;
   vector<float>   *lepEtaSC;
   TClonesArray    *metP4;
   Float_t         metSumEtRaw;
   vector<float>   *metPtJESUP;
   vector<float>   *metPtJESDOWN;
   TClonesArray    *metP4_GEN;
   TLorentzVector  *metPuppi;
   TClonesArray    *metPuppiSyst;
   TClonesArray    *metSyst;
   Float_t         metSumEtRawPuppi;
   TLorentzVector  *metNoMu;
   TLorentzVector  *metNoHF;
   Float_t         metSumEtRawNoHF;
   TLorentzVector  *pfMet_e3p0;
   TLorentzVector  *trackMet;
   TLorentzVector  *neutralMet;
   TLorentzVector  *photonMet;
   TLorentzVector  *HFMet;
   Float_t         caloMet_Pt;
   Float_t         caloMet_Phi;
   Float_t         caloMet_SumEt;
   Float_t         rawMet_Pt;
   Float_t         rawMet_Phi;
   TClonesArray    *photonP4;
   vector<int>     *photonMatch;
   vector<float>   *photonIso;
   vector<float>   *photonSieie;
   vector<unsigned int> *photonSelBits;
   vector<float>   *photonChIso;
   vector<float>   *photonNhIso;
   vector<float>   *photonPhoIso;
   vector<float>   *photonPuIso;
   vector<float>   *photonRawPt;
   vector<float>   *photonE55;
   vector<float>   *photonHOverE;
   vector<float>   *photonChWorstIso;
   vector<float>   *photonChIsoMax;
   vector<float>   *photonSipip;
   vector<float>   *photonSieip;
   vector<float>   *photonR9;
   vector<float>   *photonEtaSC;
   vector<float>   *photonS4;
   vector<float>   *photonMipEnergy;
   vector<float>   *photonTime;
   vector<float>   *photonTimeSpan;
   vector<short>   *photonGenMatched;
   TClonesArray    *genP4;
   TClonesArray    *genjetP4;
   vector<int>     *genPdgId;
   vector<unsigned int> *genFlags;
   Int_t           puTrueInt;
   Float_t         mcWeight;
   Float_t         pdfQscale;
   Float_t         pdfAlphaQED;
   Float_t         pdfAlphaQCD;
   Float_t         pdfX1;
   Float_t         pdfX2;
   Int_t           pdfId1;
   Int_t           pdfId2;
   Float_t         pdfScalePdf;
   Float_t         r2f1;
   Float_t         r5f1;
   Float_t         r1f2;
   Float_t         r2f2;
   Float_t         r1f5;
   Float_t         r5f5;
   vector<float>   *pdfRwgt;
   vector<float>   *genIso;
   vector<float>   *genIsoFrixione;
   vector<int>     *genParent;
   vector<int>     *triggerFired;
   vector<float>   *triggerPrescale;
   vector<int>     *triggerLeps;
   vector<int>     *triggerJets;
   vector<int>     *triggerTaus;
   vector<int>     *triggerPhotons;
   vector<unsigned int> *triggerNoneTaus;

   // List of branches
   TBranch        *b_isRealData;   //!
   TBranch        *b_runNum;   //!
   TBranch        *b_lumiNum;   //!
   TBranch        *b_eventNum;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_selBits;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_jetP4;   //!
   TBranch        *b_jetMatch;   //!
   TBranch        *b_jetRawPt;   //!
   TBranch        *b_jetRefPt;   //!
   TBranch        *b_jetBdiscr;   //!
   TBranch        *b_jetBdiscrLegacy;   //!
   TBranch        *b_jetPuId;   //!
   TBranch        *b_jetUnc;   //!
   TBranch        *b_jetQGL;   //!
   TBranch        *b_jetQglMult;   //!
   TBranch        *b_jetQglPtD;   //!
   TBranch        *b_jetQglAxis2;   //!
   TBranch        *b_jetFlavour;   //!
   TBranch        *b_jetMatchedPartonPdgId;   //!
   TBranch        *b_jetMotherPdgId;   //!
   TBranch        *b_jetGrMotherPdgId;   //!
   TBranch        *b_jetSelBits;   //!
   TBranch        *b_jetQ;   //!
   TBranch        *b_jetQnoPU;   //!
   TBranch        *b_jetPtResUncCentral;   //!
   TBranch        *b_jetPtResUncUp;   //!
   TBranch        *b_jetPtResUncDown;   //!
   TBranch        *b_jetpuppiP4;   //!
   TBranch        *b_jetpuppiRawPt;   //!
   TBranch        *b_jetpuppiBdiscr;   //!
   TBranch        *b_jetpuppiSelBits;   //!
   TBranch        *b_jetpuppiQ;   //!
   TBranch        *b_fatjetAK8CHSP4;   //!
   TBranch        *b_fatjetAK8CHSRawPt;   //!
   TBranch        *b_fatjetAK8CHSFlavour;   //!
   TBranch        *b_fatjetAK8CHSTau1;   //!
   TBranch        *b_fatjetAK8CHSTau2;   //!
   TBranch        *b_fatjetAK8CHSTau3;   //!
   TBranch        *b_fatjetAK8CHSTrimmedMass;   //!
   TBranch        *b_fatjetAK8CHSPrunedMass;   //!
   TBranch        *b_fatjetAK8CHSCorrectedPrunedMass;   //!
   TBranch        *b_fatjetAK8CHSSoftdropMass;   //!
   TBranch        *b_fatjetAK8CHSsubjet;   //!
   TBranch        *b_fatjetAK8CHSnSubjets;   //!
   TBranch        *b_fatjetAK8CHSfirstSubjet;   //!
   TBranch        *b_fatjetAK8CHSsubjet_btag;   //!
   TBranch        *b_fatjetAK8CHSHbb;   //!
   TBranch        *b_fatjetAK8CHStopMVA;   //!
   TBranch        *b_tauP4;   //!
   TBranch        *b_tauMatch;   //!
   TBranch        *b_tauSelBits;   //!
   TBranch        *b_tauQ;   //!
   TBranch        *b_tauM;   //!
   TBranch        *b_tauIso;   //!
   TBranch        *b_tauChargedIsoPtSum;   //!
   TBranch        *b_tauNeutralIsoPtSum;   //!
   TBranch        *b_tauIsoDeltaBetaCorr;   //!
   TBranch        *b_tauIsoPileupWeightedRaw;   //!
   TBranch        *b_tauIsoMva;   //!
   TBranch        *b_lepP4;   //!
   TBranch        *b_lepMatch;   //!
   TBranch        *b_lepPdgId;   //!
   TBranch        *b_lepIso;   //!
   TBranch        *b_lepSelBits;   //!
   TBranch        *b_lepPfPt;   //!
   TBranch        *b_lepMva;   //!
   TBranch        *b_lepChIso;   //!
   TBranch        *b_lepNhIso;   //!
   TBranch        *b_lepPhoIso;   //!
   TBranch        *b_lepPuIso;   //!
   TBranch        *b_lepEtaSC;   //!
   TBranch        *b_metP4;   //!
   TBranch        *b_metSumEtRaw;   //!
   TBranch        *b_metPtJESUP;   //!
   TBranch        *b_metPtJESDOWN;   //!
   TBranch        *b_metP4_GEN;   //!
   TBranch        *b_metPuppi;   //!
   TBranch        *b_metPuppiSyst;   //!
   TBranch        *b_metSyst;   //!
   TBranch        *b_metSumEtRawPuppi;   //!
   TBranch        *b_metNoMu;   //!
   TBranch        *b_metNoHF;   //!
   TBranch        *b_metSumEtRawNoHF;   //!
   TBranch        *b_pfMet_e3p0;   //!
   TBranch        *b_trackMet;   //!
   TBranch        *b_neutralMet;   //!
   TBranch        *b_photonMet;   //!
   TBranch        *b_HFMet;   //!
   TBranch        *b_caloMet_Pt;   //!
   TBranch        *b_caloMet_Phi;   //!
   TBranch        *b_caloMet_SumEt;   //!
   TBranch        *b_rawMet_Pt;   //!
   TBranch        *b_rawMet_Phi;   //!
   TBranch        *b_photonP4;   //!
   TBranch        *b_photonMatch;   //!
   TBranch        *b_photonIso;   //!
   TBranch        *b_photonSieie;   //!
   TBranch        *b_photonSelBits;   //!
   TBranch        *b_photonChIso;   //!
   TBranch        *b_photonNhIso;   //!
   TBranch        *b_photonPhoIso;   //!
   TBranch        *b_photonPuIso;   //!
   TBranch        *b_photonRawPt;   //!
   TBranch        *b_photonE55;   //!
   TBranch        *b_photonHOverE;   //!
   TBranch        *b_photonChWorstIso;   //!
   TBranch        *b_photonChIsoMax;   //!
   TBranch        *b_photonSipip;   //!
   TBranch        *b_photonSieip;   //!
   TBranch        *b_photonR9;   //!
   TBranch        *b_photonEtaSC;   //!
   TBranch        *b_photonS4;   //!
   TBranch        *b_photonMipEnergy;   //!
   TBranch        *b_photonTime;   //!
   TBranch        *b_photonTimeSpan;   //!
   TBranch        *b_photonGenMatched;   //!
   TBranch        *b_genP4;   //!
   TBranch        *b_genjetP4;   //!
   TBranch        *b_genPdgId;   //!
   TBranch        *b_genFlags;   //!
   TBranch        *b_puTrueInt;   //!
   TBranch        *b_mcWeight;   //!
   TBranch        *b_pdfQscale;   //!
   TBranch        *b_pdfAlphaQED;   //!
   TBranch        *b_pdfAlphaQCD;   //!
   TBranch        *b_pdfX1;   //!
   TBranch        *b_pdfX2;   //!
   TBranch        *b_pdfId1;   //!
   TBranch        *b_pdfId2;   //!
   TBranch        *b_pdfScalePdf;   //!
   TBranch        *b_r2f1;   //!
   TBranch        *b_r5f1;   //!
   TBranch        *b_r1f2;   //!
   TBranch        *b_r2f2;   //!
   TBranch        *b_r1f5;   //!
   TBranch        *b_r5f5;   //!
   TBranch        *b_pdfRwgt;   //!
   TBranch        *b_genIso;   //!
   TBranch        *b_genIsoFrixione;   //!
   TBranch        *b_genParent;   //!
   TBranch        *b_triggerFired;   //!
   TBranch        *b_triggerPrescale;   //!
   TBranch        *b_triggerLeps;   //!
   TBranch        *b_triggerJets;   //!
   TBranch        *b_triggerTaus;   //!
   TBranch        *b_triggerPhotons;   //!
   TBranch        *b_triggerNoneTaus;   //!

   nero_07(TTree *tree=0);
   virtual ~nero_07();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef nero_07_cxx
nero_07::nero_07(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("NeroNtuples_9.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("NeroNtuples_9.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("NeroNtuples_9.root:/nero");
      dir->GetObject("events",tree);

   }
   Init(tree);
}

nero_07::~nero_07()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t nero_07::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t nero_07::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void nero_07::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   jetP4 = 0;
   jetMatch = 0;
   jetRawPt = 0;
   jetRefPt = 0;
   jetBdiscr = 0;
   jetBdiscrLegacy = 0;
   jetPuId = 0;
   jetUnc = 0;
   jetQGL = 0;
   jetQglMult = 0;
   jetQglPtD = 0;
   jetQglAxis2 = 0;
   jetFlavour = 0;
   jetMatchedPartonPdgId = 0;
   jetMotherPdgId = 0;
   jetGrMotherPdgId = 0;
   jetSelBits = 0;
   jetQ = 0;
   jetQnoPU = 0;
   jetPtResUncCentral = 0;
   jetPtResUncUp = 0;
   jetPtResUncDown = 0;
   jetpuppiP4 = 0;
   jetpuppiRawPt = 0;
   jetpuppiBdiscr = 0;
   jetpuppiSelBits = 0;
   jetpuppiQ = 0;
   fatjetAK8CHSP4 = 0;
   fatjetAK8CHSRawPt = 0;
   fatjetAK8CHSFlavour = 0;
   fatjetAK8CHSTau1 = 0;
   fatjetAK8CHSTau2 = 0;
   fatjetAK8CHSTau3 = 0;
   fatjetAK8CHSTrimmedMass = 0;
   fatjetAK8CHSPrunedMass = 0;
   fatjetAK8CHSCorrectedPrunedMass = 0;
   fatjetAK8CHSSoftdropMass = 0;
   fatjetAK8CHSsubjet = 0;
   fatjetAK8CHSnSubjets = 0;
   fatjetAK8CHSfirstSubjet = 0;
   fatjetAK8CHSsubjet_btag = 0;
   fatjetAK8CHSHbb = 0;
   fatjetAK8CHStopMVA = 0;
   tauP4 = 0;
   tauMatch = 0;
   tauSelBits = 0;
   tauQ = 0;
   tauM = 0;
   tauIso = 0;
   tauChargedIsoPtSum = 0;
   tauNeutralIsoPtSum = 0;
   tauIsoDeltaBetaCorr = 0;
   tauIsoPileupWeightedRaw = 0;
   tauIsoMva = 0;
   lepP4 = 0;
   lepMatch = 0;
   lepPdgId = 0;
   lepIso = 0;
   lepSelBits = 0;
   lepPfPt = 0;
   lepMva = 0;
   lepChIso = 0;
   lepNhIso = 0;
   lepPhoIso = 0;
   lepPuIso = 0;
   lepEtaSC = 0;
   metP4 = 0;
   metPtJESUP = 0;
   metPtJESDOWN = 0;
   metP4_GEN = 0;
   metPuppi = 0;
   metPuppiSyst = 0;
   metSyst = 0;
   metNoMu = 0;
   metNoHF = 0;
   pfMet_e3p0 = 0;
   trackMet = 0;
   neutralMet = 0;
   photonMet = 0;
   HFMet = 0;
   photonP4 = 0;
   photonMatch = 0;
   photonIso = 0;
   photonSieie = 0;
   photonSelBits = 0;
   photonChIso = 0;
   photonNhIso = 0;
   photonPhoIso = 0;
   photonPuIso = 0;
   photonRawPt = 0;
   photonE55 = 0;
   photonHOverE = 0;
   photonChWorstIso = 0;
   photonChIsoMax = 0;
   photonSipip = 0;
   photonSieip = 0;
   photonR9 = 0;
   photonEtaSC = 0;
   photonS4 = 0;
   photonMipEnergy = 0;
   photonTime = 0;
   photonTimeSpan = 0;
   photonGenMatched = 0;
   genP4 = 0;
   genjetP4 = 0;
   genPdgId = 0;
   genFlags = 0;
   pdfRwgt = 0;
   genIso = 0;
   genIsoFrixione = 0;
   genParent = 0;
   triggerFired = 0;
   triggerPrescale = 0;
   triggerLeps = 0;
   triggerJets = 0;
   triggerTaus = 0;
   triggerPhotons = 0;
   triggerNoneTaus = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("isRealData", &isRealData, &b_isRealData);
   fChain->SetBranchAddress("runNum", &runNum, &b_runNum);
   fChain->SetBranchAddress("lumiNum", &lumiNum, &b_lumiNum);
   fChain->SetBranchAddress("eventNum", &eventNum, &b_eventNum);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("filterSelBits", &filterSelBits, &b_selBits);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("jetP4", &jetP4, &b_jetP4);
   fChain->SetBranchAddress("jetMatch", &jetMatch, &b_jetMatch);
   fChain->SetBranchAddress("jetRawPt", &jetRawPt, &b_jetRawPt);
   fChain->SetBranchAddress("jetRefPt", &jetRefPt, &b_jetRefPt);
   fChain->SetBranchAddress("jetBdiscr", &jetBdiscr, &b_jetBdiscr);
   fChain->SetBranchAddress("jetBdiscrLegacy", &jetBdiscrLegacy, &b_jetBdiscrLegacy);
   fChain->SetBranchAddress("jetPuId", &jetPuId, &b_jetPuId);
   fChain->SetBranchAddress("jetUnc", &jetUnc, &b_jetUnc);
   fChain->SetBranchAddress("jetQGL", &jetQGL, &b_jetQGL);
   fChain->SetBranchAddress("jetQglMult", &jetQglMult, &b_jetQglMult);
   fChain->SetBranchAddress("jetQglPtD", &jetQglPtD, &b_jetQglPtD);
   fChain->SetBranchAddress("jetQglAxis2", &jetQglAxis2, &b_jetQglAxis2);
   fChain->SetBranchAddress("jetFlavour", &jetFlavour, &b_jetFlavour);
   fChain->SetBranchAddress("jetMatchedPartonPdgId", &jetMatchedPartonPdgId, &b_jetMatchedPartonPdgId);
   fChain->SetBranchAddress("jetMotherPdgId", &jetMotherPdgId, &b_jetMotherPdgId);
   fChain->SetBranchAddress("jetGrMotherPdgId", &jetGrMotherPdgId, &b_jetGrMotherPdgId);
   fChain->SetBranchAddress("jetSelBits", &jetSelBits, &b_jetSelBits);
   fChain->SetBranchAddress("jetQ", &jetQ, &b_jetQ);
   fChain->SetBranchAddress("jetQnoPU", &jetQnoPU, &b_jetQnoPU);
   fChain->SetBranchAddress("jetPtResUncCentral", &jetPtResUncCentral, &b_jetPtResUncCentral);
   fChain->SetBranchAddress("jetPtResUncUp", &jetPtResUncUp, &b_jetPtResUncUp);
   fChain->SetBranchAddress("jetPtResUncDown", &jetPtResUncDown, &b_jetPtResUncDown);
   fChain->SetBranchAddress("jetpuppiP4", &jetpuppiP4, &b_jetpuppiP4);
   fChain->SetBranchAddress("jetpuppiRawPt", &jetpuppiRawPt, &b_jetpuppiRawPt);
   fChain->SetBranchAddress("jetpuppiBdiscr", &jetpuppiBdiscr, &b_jetpuppiBdiscr);
   fChain->SetBranchAddress("jetpuppiSelBits", &jetpuppiSelBits, &b_jetpuppiSelBits);
   fChain->SetBranchAddress("jetpuppiQ", &jetpuppiQ, &b_jetpuppiQ);
   fChain->SetBranchAddress("fatjetAK8CHSP4", &fatjetAK8CHSP4, &b_fatjetAK8CHSP4);
   fChain->SetBranchAddress("fatjetAK8CHSRawPt", &fatjetAK8CHSRawPt, &b_fatjetAK8CHSRawPt);
   fChain->SetBranchAddress("fatjetAK8CHSFlavour", &fatjetAK8CHSFlavour, &b_fatjetAK8CHSFlavour);
   fChain->SetBranchAddress("fatjetAK8CHSTau1", &fatjetAK8CHSTau1, &b_fatjetAK8CHSTau1);
   fChain->SetBranchAddress("fatjetAK8CHSTau2", &fatjetAK8CHSTau2, &b_fatjetAK8CHSTau2);
   fChain->SetBranchAddress("fatjetAK8CHSTau3", &fatjetAK8CHSTau3, &b_fatjetAK8CHSTau3);
   fChain->SetBranchAddress("fatjetAK8CHSTrimmedMass", &fatjetAK8CHSTrimmedMass, &b_fatjetAK8CHSTrimmedMass);
   fChain->SetBranchAddress("fatjetAK8CHSPrunedMass", &fatjetAK8CHSPrunedMass, &b_fatjetAK8CHSPrunedMass);
   fChain->SetBranchAddress("fatjetAK8CHSCorrectedPrunedMass", &fatjetAK8CHSCorrectedPrunedMass, &b_fatjetAK8CHSCorrectedPrunedMass);
   fChain->SetBranchAddress("fatjetAK8CHSSoftdropMass", &fatjetAK8CHSSoftdropMass, &b_fatjetAK8CHSSoftdropMass);
   fChain->SetBranchAddress("fatjetAK8CHSsubjet", &fatjetAK8CHSsubjet, &b_fatjetAK8CHSsubjet);
   fChain->SetBranchAddress("fatjetAK8CHSnSubjets", &fatjetAK8CHSnSubjets, &b_fatjetAK8CHSnSubjets);
   fChain->SetBranchAddress("fatjetAK8CHSfirstSubjet", &fatjetAK8CHSfirstSubjet, &b_fatjetAK8CHSfirstSubjet);
   fChain->SetBranchAddress("fatjetAK8CHSsubjet_btag", &fatjetAK8CHSsubjet_btag, &b_fatjetAK8CHSsubjet_btag);
   fChain->SetBranchAddress("fatjetAK8CHSHbb", &fatjetAK8CHSHbb, &b_fatjetAK8CHSHbb);
   fChain->SetBranchAddress("fatjetAK8CHStopMVA", &fatjetAK8CHStopMVA, &b_fatjetAK8CHStopMVA);
   fChain->SetBranchAddress("tauP4", &tauP4, &b_tauP4);
   fChain->SetBranchAddress("tauMatch", &tauMatch, &b_tauMatch);
   fChain->SetBranchAddress("tauSelBits", &tauSelBits, &b_tauSelBits);
   fChain->SetBranchAddress("tauQ", &tauQ, &b_tauQ);
   fChain->SetBranchAddress("tauM", &tauM, &b_tauM);
   fChain->SetBranchAddress("tauIso", &tauIso, &b_tauIso);
   fChain->SetBranchAddress("tauChargedIsoPtSum", &tauChargedIsoPtSum, &b_tauChargedIsoPtSum);
   fChain->SetBranchAddress("tauNeutralIsoPtSum", &tauNeutralIsoPtSum, &b_tauNeutralIsoPtSum);
   fChain->SetBranchAddress("tauIsoDeltaBetaCorr", &tauIsoDeltaBetaCorr, &b_tauIsoDeltaBetaCorr);
   fChain->SetBranchAddress("tauIsoPileupWeightedRaw", &tauIsoPileupWeightedRaw, &b_tauIsoPileupWeightedRaw);
   fChain->SetBranchAddress("tauIsoMva", &tauIsoMva, &b_tauIsoMva);
   fChain->SetBranchAddress("lepP4", &lepP4, &b_lepP4);
   fChain->SetBranchAddress("lepMatch", &lepMatch, &b_lepMatch);
   fChain->SetBranchAddress("lepPdgId", &lepPdgId, &b_lepPdgId);
   fChain->SetBranchAddress("lepIso", &lepIso, &b_lepIso);
   fChain->SetBranchAddress("lepSelBits", &lepSelBits, &b_lepSelBits);
   fChain->SetBranchAddress("lepPfPt", &lepPfPt, &b_lepPfPt);
   fChain->SetBranchAddress("lepMva", &lepMva, &b_lepMva);
   fChain->SetBranchAddress("lepChIso", &lepChIso, &b_lepChIso);
   fChain->SetBranchAddress("lepNhIso", &lepNhIso, &b_lepNhIso);
   fChain->SetBranchAddress("lepPhoIso", &lepPhoIso, &b_lepPhoIso);
   fChain->SetBranchAddress("lepPuIso", &lepPuIso, &b_lepPuIso);
   fChain->SetBranchAddress("lepEtaSC", &lepEtaSC, &b_lepEtaSC);
   fChain->SetBranchAddress("metP4", &metP4, &b_metP4);
   fChain->SetBranchAddress("metSumEtRaw", &metSumEtRaw, &b_metSumEtRaw);
   fChain->SetBranchAddress("metPtJESUP", &metPtJESUP, &b_metPtJESUP);
   fChain->SetBranchAddress("metPtJESDOWN", &metPtJESDOWN, &b_metPtJESDOWN);
   fChain->SetBranchAddress("metP4_GEN", &metP4_GEN, &b_metP4_GEN);
   fChain->SetBranchAddress("metPuppi", &metPuppi, &b_metPuppi);
   fChain->SetBranchAddress("metPuppiSyst", &metPuppiSyst, &b_metPuppiSyst);
   fChain->SetBranchAddress("metSyst", &metSyst, &b_metSyst);
   fChain->SetBranchAddress("metSumEtRawPuppi", &metSumEtRawPuppi, &b_metSumEtRawPuppi);
   fChain->SetBranchAddress("metNoMu", &metNoMu, &b_metNoMu);
   fChain->SetBranchAddress("metNoHF", &metNoHF, &b_metNoHF);
   fChain->SetBranchAddress("metSumEtRawNoHF", &metSumEtRawNoHF, &b_metSumEtRawNoHF);
   fChain->SetBranchAddress("pfMet_e3p0", &pfMet_e3p0, &b_pfMet_e3p0);
   fChain->SetBranchAddress("trackMet", &trackMet, &b_trackMet);
   fChain->SetBranchAddress("neutralMet", &neutralMet, &b_neutralMet);
   fChain->SetBranchAddress("photonMet", &photonMet, &b_photonMet);
   fChain->SetBranchAddress("HFMet", &HFMet, &b_HFMet);
   fChain->SetBranchAddress("caloMet_Pt", &caloMet_Pt, &b_caloMet_Pt);
   fChain->SetBranchAddress("caloMet_Phi", &caloMet_Phi, &b_caloMet_Phi);
   fChain->SetBranchAddress("caloMet_SumEt", &caloMet_SumEt, &b_caloMet_SumEt);
   fChain->SetBranchAddress("rawMet_Pt", &rawMet_Pt, &b_rawMet_Pt);
   fChain->SetBranchAddress("rawMet_Phi", &rawMet_Phi, &b_rawMet_Phi);
   fChain->SetBranchAddress("photonP4", &photonP4, &b_photonP4);
   fChain->SetBranchAddress("photonMatch", &photonMatch, &b_photonMatch);
   fChain->SetBranchAddress("photonIso", &photonIso, &b_photonIso);
   fChain->SetBranchAddress("photonSieie", &photonSieie, &b_photonSieie);
   fChain->SetBranchAddress("photonSelBits", &photonSelBits, &b_photonSelBits);
   fChain->SetBranchAddress("photonChIso", &photonChIso, &b_photonChIso);
   fChain->SetBranchAddress("photonNhIso", &photonNhIso, &b_photonNhIso);
   fChain->SetBranchAddress("photonPhoIso", &photonPhoIso, &b_photonPhoIso);
   fChain->SetBranchAddress("photonPuIso", &photonPuIso, &b_photonPuIso);
   fChain->SetBranchAddress("photonRawPt", &photonRawPt, &b_photonRawPt);
   fChain->SetBranchAddress("photonE55", &photonE55, &b_photonE55);
   fChain->SetBranchAddress("photonHOverE", &photonHOverE, &b_photonHOverE);
   fChain->SetBranchAddress("photonChWorstIso", &photonChWorstIso, &b_photonChWorstIso);
   fChain->SetBranchAddress("photonChIsoMax", &photonChIsoMax, &b_photonChIsoMax);
   fChain->SetBranchAddress("photonSipip", &photonSipip, &b_photonSipip);
   fChain->SetBranchAddress("photonSieip", &photonSieip, &b_photonSieip);
   fChain->SetBranchAddress("photonR9", &photonR9, &b_photonR9);
   fChain->SetBranchAddress("photonEtaSC", &photonEtaSC, &b_photonEtaSC);
   fChain->SetBranchAddress("photonS4", &photonS4, &b_photonS4);
   fChain->SetBranchAddress("photonMipEnergy", &photonMipEnergy, &b_photonMipEnergy);
   fChain->SetBranchAddress("photonTime", &photonTime, &b_photonTime);
   fChain->SetBranchAddress("photonTimeSpan", &photonTimeSpan, &b_photonTimeSpan);
   fChain->SetBranchAddress("photonGenMatched", &photonGenMatched, &b_photonGenMatched);
   fChain->SetBranchAddress("genP4", &genP4, &b_genP4);
   fChain->SetBranchAddress("genjetP4", &genjetP4, &b_genjetP4);
   fChain->SetBranchAddress("genPdgId", &genPdgId, &b_genPdgId);
   fChain->SetBranchAddress("genFlags", &genFlags, &b_genFlags);
   fChain->SetBranchAddress("puTrueInt", &puTrueInt, &b_puTrueInt);
   fChain->SetBranchAddress("mcWeight", &mcWeight, &b_mcWeight);
   fChain->SetBranchAddress("pdfQscale", &pdfQscale, &b_pdfQscale);
   fChain->SetBranchAddress("pdfAlphaQED", &pdfAlphaQED, &b_pdfAlphaQED);
   fChain->SetBranchAddress("pdfAlphaQCD", &pdfAlphaQCD, &b_pdfAlphaQCD);
   fChain->SetBranchAddress("pdfX1", &pdfX1, &b_pdfX1);
   fChain->SetBranchAddress("pdfX2", &pdfX2, &b_pdfX2);
   fChain->SetBranchAddress("pdfId1", &pdfId1, &b_pdfId1);
   fChain->SetBranchAddress("pdfId2", &pdfId2, &b_pdfId2);
   fChain->SetBranchAddress("pdfScalePdf", &pdfScalePdf, &b_pdfScalePdf);
   fChain->SetBranchAddress("r2f1", &r2f1, &b_r2f1);
   fChain->SetBranchAddress("r5f1", &r5f1, &b_r5f1);
   fChain->SetBranchAddress("r1f2", &r1f2, &b_r1f2);
   fChain->SetBranchAddress("r2f2", &r2f2, &b_r2f2);
   fChain->SetBranchAddress("r1f5", &r1f5, &b_r1f5);
   fChain->SetBranchAddress("r5f5", &r5f5, &b_r5f5);
   fChain->SetBranchAddress("pdfRwgt", &pdfRwgt, &b_pdfRwgt);
   fChain->SetBranchAddress("genIso", &genIso, &b_genIso);
   fChain->SetBranchAddress("genIsoFrixione", &genIsoFrixione, &b_genIsoFrixione);
   fChain->SetBranchAddress("genParent", &genParent, &b_genParent);
   fChain->SetBranchAddress("triggerFired", &triggerFired, &b_triggerFired);
   fChain->SetBranchAddress("triggerPrescale", &triggerPrescale, &b_triggerPrescale);
   fChain->SetBranchAddress("triggerLeps", &triggerLeps, &b_triggerLeps);
   fChain->SetBranchAddress("triggerJets", &triggerJets, &b_triggerJets);
   fChain->SetBranchAddress("triggerTaus", &triggerTaus, &b_triggerTaus);
   fChain->SetBranchAddress("triggerPhotons", &triggerPhotons, &b_triggerPhotons);
   fChain->SetBranchAddress("triggerNoneTaus", &triggerNoneTaus, &b_triggerNoneTaus);
   Notify();
}

Bool_t nero_07::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void nero_07::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t nero_07::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef nero_07_cxx
