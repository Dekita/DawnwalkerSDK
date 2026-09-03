#include "DawnwalkerTraversalComponent.h"

UDawnwalkerTraversalComponent::UDawnwalkerTraversalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LedgeWallsForceEnabledCondition = NULL;
    this->LedgeWallsDisabledCondition = NULL;
    this->bEnableLedgeWalls = false;
    this->VaultingDisabledCondition = NULL;
    this->VaultingTraceChannel = ECC_GameTraceChannel7;
    this->bEnableVaulting = false;
    this->VaultingLedgeMaxDistance = 300.00f;
    this->VaultingLedgeMinHeight = 70.00f;
    this->VaultingLedgeMaxHeight = 140.00f;
    this->VaultingMaxDistance = 150.00f;
    this->ClimbingDisabledCondition = NULL;
    this->LedgeClimbingTraceChannel = ECC_GameTraceChannel7;
    this->bEnableClimbing = false;
    this->ClimbingLedgeMaxDistance = 300.00f;
    this->ClimbingLedgeMinHeight = 140.00f;
    this->ClimbingLedgeMaxHeight = 305.00f;
    this->LedgeCatchingDisabledCondition = NULL;
    this->LedgeCatchingTraceChannel = ECC_GameTraceChannel7;
    this->bEnableLedgeCatching = false;
    this->bLedgeCatchingUseActorForward = true;
    this->LedgeCatchingMaxDistance = 300.00f;
    this->LedgeCatchingMinHeight = 50.00f;
    this->LedgeCatchingLedgeMaxHeight = 190.00f;
    this->LedgeDepth = 40.00f;
    this->LedgeSphereTestRadius = 5.00f;
    this->bEnableMovementTest = false;
    this->bEnableFeetFloorTest = false;
    this->FloorTestDistance = 1000.00f;
    this->FloorTestNoCollisions = 3;
    this->SlideableFloorAngle = 40.00f;
    this->LandscapeSlideableFloorAngle = 45.00f;
    this->MovementTestDisabledCondition = NULL;
    this->GettingOffLedgeCondition = NULL;
    this->StartSlidingCondition = NULL;
    this->StopSlidingCondition = NULL;
    this->FallingCondition = NULL;
    this->SlidingOffLedgeAcceleration = 980.00f;
    this->SlidingOffLedgeDeceleration = 4000.00f;
    this->SlidingOffLedgeViscousDrag = 0.00f;
    this->SlidingDownAcceleration = 750.00f;
    this->SlidingDownDeceleration = 4000.00f;
    this->SlidingDownViscousDrag = 0.00f;
    this->SlidingDownMomentumTime = 0.40f;
    this->TestMoveDelta = 25.00f;
}

void UDawnwalkerTraversalComponent::SetOverrideSettings(const FGameplayTag SettingsTag) {
}


