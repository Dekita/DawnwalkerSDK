#include "HoudiniNodeSyncComponent.h"
#include "EHoudiniAssetState.h"

UHoudiniNodeSyncComponent::UHoudiniNodeSyncComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Movable;
    this->AssetState = EHoudiniAssetState::None;
    this->bLiveSyncEnabled = true;
}


