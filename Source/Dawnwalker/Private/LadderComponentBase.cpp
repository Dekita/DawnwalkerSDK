#include "LadderComponentBase.h"

ULadderComponentBase::ULadderComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bCastDynamicShadow = false;
    this->bExcludeFromLightAttachmentGroup = true;
    this->bUseEditorCompositing = true;
    this->DismountOffset = 35.00f;
    this->bTopEntranceOpen = true;
    this->bBottomEntranceOpen = true;
}

bool ULadderComponentBase::IsEnterUp(FVector ActorLocation) {
    return false;
}

FVector ULadderComponentBase::GetWorldEndLocation() const {
    return FVector{};
}

float ULadderComponentBase::GetLadderLength() const {
    return 0.0f;
}

FRotator ULadderComponentBase::GetLadderGoDownOrientation() const {
    return FRotator{};
}

FRotator ULadderComponentBase::GetLadderClimbOrientation() const {
    return FRotator{};
}

FVector ULadderComponentBase::GetLadderClimbDirection() const {
    return FVector{};
}

FVector ULadderComponentBase::FindStartLocationOnLadder(const FVector& InPoint, bool bIsUp) const {
    return FVector{};
}

FVector ULadderComponentBase::FindNearestLocationOnLadderDuringSlideExit(const FVector& InPoint, const FVector& CurrentLocation, bool& OutIsInSpot) const {
    return FVector{};
}

FVector ULadderComponentBase::FindNearestLocationOnLadder(const FVector& InPoint) const {
    return FVector{};
}

float ULadderComponentBase::FindDistanceAlongLadder(const FVector& InPoint) const {
    return 0.0f;
}


