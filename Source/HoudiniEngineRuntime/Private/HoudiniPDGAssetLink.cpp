#include "HoudiniPDGAssetLink.h"

UHoudiniPDGAssetLink::UHoudiniPDGAssetLink() {
    this->AssetId = -1;
    this->SelectedTOPNetworkIndex = -1;
    this->LinkState = EPDGLinkState::Inactive;
    this->bAutoCook = false;
    this->bUseTOPNodeFilter = true;
    this->bUseTOPOutputFilter = true;
    this->TOPNodeFilter = TEXT("HE_");
    this->TOPOutputFilter = TEXT("HE_OUT_");
    this->NumWorkItems = 0;
    this->bNeedsUIRefresh = false;
    this->OutputParentActor = NULL;
    this->NumAttemptedNodeAutoBakes = 0;
    this->NumSuccessfulNodeAutoBakes = 0;
}


