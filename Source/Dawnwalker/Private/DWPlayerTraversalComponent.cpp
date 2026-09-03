#include "DWPlayerTraversalComponent.h"

UDWPlayerTraversalComponent::UDWPlayerTraversalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StopOnLedgeCondition = NULL;
    this->BumpMontageSet = NULL;
    this->VaultingMontageSet = NULL;
    this->AutoClimbingCondition = NULL;
    this->ClimbingMontageSet = NULL;
    this->LedgeCatchingMontageSet = NULL;
    this->StartSlidingMontageSet = NULL;
    this->StopSlidingMontageSet = NULL;
    this->BumpCooldown = 2.00f;
    this->InteriorMovementProfile = NULL;
    this->LedgeTestDistance = 150.00f;
    this->ImpactMontage = NULL;
    this->VaultingMontage = NULL;
    this->SlidingMontage = NULL;
}

bool UDWPlayerTraversalComponent::RequestVaultingTraversal() {
    return false;
}

bool UDWPlayerTraversalComponent::RequestClimbingTraversal() {
    return false;
}

void UDWPlayerTraversalComponent::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UDWPlayerTraversalComponent::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UDWPlayerTraversalComponent::OnInteriorSubsystemReady() {
}

void UDWPlayerTraversalComponent::OnInteriorChanged(const FInteriorVolumeData& CurrentInteriorData) {
}

void UDWPlayerTraversalComponent::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


