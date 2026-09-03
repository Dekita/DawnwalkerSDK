#include "DashAbility.h"

UDashAbility::UDashAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->AnimNotifyClass = NULL;
    this->Montage = NULL;
    this->TickTask = NULL;
    this->WaitTaskForMontage = NULL;
}

void UDashAbility::TickDash(float DeltaTime) {
}

void UDashAbility::OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) {
}

void UDashAbility::OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) {
}

void UDashAbility::OnMontageInterrupted() {
}

void UDashAbility::OnMontageFished() {
}


