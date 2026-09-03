#include "DogwoodAbilityTask_PlaySyncedMontages.h"

UDogwoodAbilityTask_PlaySyncedMontages::UDogwoodAbilityTask_PlaySyncedMontages() {
    this->OwnerCharacter = NULL;
    this->OwnerMontage = NULL;
    this->TargetCharacter = NULL;
    this->TargetMontage = NULL;
}

UDogwoodAbilityTask_PlaySyncedMontages* UDogwoodAbilityTask_PlaySyncedMontages::PlaySyncedMontages(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* InOwnerMontage, ACharacter* InTargetCharacter, UAnimMontage* InTargetMontage, float Rate, bool bStopWhenAbilityEnds, bool bInstantSync, int32 SectionNumber) {
    return NULL;
}

void UDogwoodAbilityTask_PlaySyncedMontages::OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UDogwoodAbilityTask_PlaySyncedMontages::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UDogwoodAbilityTask_PlaySyncedMontages::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UDogwoodAbilityTask_PlaySyncedMontages::OnMontageBlendedIn(UAnimMontage* Montage) {
}

void UDogwoodAbilityTask_PlaySyncedMontages::OnAbilityCancelled() {
}


