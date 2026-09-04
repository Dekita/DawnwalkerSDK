#include "RebelRoadsSegmentRenderingComponent.h"

URebelRoadsSegmentRenderingComponent::URebelRoadsSegmentRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->bEnableAutoLODGeneration = false;
    this->CanCharacterStepUpOn = ECB_No;
}


