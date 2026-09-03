#include "AnimNotifyState_AAMotionWarping.h"

UAnimNotifyState_AAMotionWarping::UAnimNotifyState_AAMotionWarping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTickDashMotion = false;
    this->bUsePlayerAsTargetLocation = false;
    this->ArcHeight = 0.00f;
    this->ArcHeightExp = 0.50f;
    this->bLandOnTop = false;
    this->DistanceOffset = 0.00f;
    this->MaximumDistanceToTravel = 0.00f;
    this->AnimInstanceCache = NULL;
}


