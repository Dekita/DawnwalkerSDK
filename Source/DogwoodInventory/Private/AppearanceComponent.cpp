#include "AppearanceComponent.h"

UAppearanceComponent::UAppearanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DismembermentBoneMap = NULL;
    this->DeferredAppearance = NULL;
    this->bIgnoreQualityLevel = false;
    this->bRemoveItemsOnUnequip = false;
    this->CurrentAppearance = NULL;
    this->CurrentBody = NULL;
}

void UAppearanceComponent::SetIgnoreInventoryEquipEvents(const bool bIgnore) {
}

void UAppearanceComponent::SetAppearanceVisibility(bool bHide) {
}

void UAppearanceComponent::OnInventoryContentsChanged() {
}

void UAppearanceComponent::LeaderMeshRefreshBoneTransforms() {
}

UGroomComponent* UAppearanceComponent::GetGroomComponent(EBodyGroomType InSlot) const {
    return NULL;
}

USkinnedMeshComponent* UAppearanceComponent::GetGarmentMeshComponent(EAppearanceSlot InSlot) const {
    return NULL;
}

UAppearanceBase* UAppearanceComponent::GetCurrentAppearance() {
    return NULL;
}

void UAppearanceComponent::DismemberLimb(EDismemberLimb InLimb, FDismembermentForceParams& DismembermentForceParams) {
}

void UAppearanceComponent::ApplyBody(UCharacterBodyPreset* InBody) {
}

void UAppearanceComponent::ApplyAppearance(UAppearanceBase* InAppearance) {
}


