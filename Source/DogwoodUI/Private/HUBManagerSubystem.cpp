#include "HUBManagerSubystem.h"

UHUBManagerSubystem::UHUBManagerSubystem() {
    this->ActiveHubWidget = NULL;
    this->PushedHubMessage = NULL;
    this->HUDPresetWhenHubIsActive = NULL;
    this->HubPrestreamResourcesDataAsset = NULL;
}

bool UHUBManagerSubystem::TryShowHUB(const UObject* WorldContextObject, const FGameplayTag& TabTag) {
    return false;
}

bool UHUBManagerSubystem::TryHideHUB(const UObject* WorldContextObject) {
    return false;
}

void UHUBManagerSubystem::RequestMapRefresh() {
}

void UHUBManagerSubystem::RegisterSpawnedTabWidget(const FGameplayTag& TabTag, UUserWidget* TabWidget) {
}

void UHUBManagerSubystem::PushHubMessage(UHubMessage* InMessage) {
}

void UHUBManagerSubystem::NotifyTabActivated(const FGameplayTag& TabTag) {
}

void UHUBManagerSubystem::LaunchHUB(const UObject* WorldContextObject, const FGameplayTag Tab) {
}

bool UHUBManagerSubystem::IsTabActive(const FGameplayTag& TabTag) const {
    return false;
}

FHubTabRow UHUBManagerSubystem::GetTabRow(const FGameplayTag& TabTag) const {
    return FHubTabRow{};
}

UUserWidget* UHUBManagerSubystem::GetSpawnedTabWidget(const FGameplayTag& TabTag) const {
    return NULL;
}

void UHUBManagerSubystem::GetRegisteredHubTabs(TArray<FHubTabRow>& OutTabs) const {
}

void UHUBManagerSubystem::GetAllTabTags(TArray<FGameplayTag>& OutTags) {
}

void UHUBManagerSubystem::BP_StreamOutShrineMapResources() {
}

void UHUBManagerSubystem::BP_StreamInShrineMapResources() {
}

void UHUBManagerSubystem::BP_SetTabLocked(const FGameplayTag TabTag, bool bEnabled, bool bModifyVisibility) {
}

bool UHUBManagerSubystem::BP_IsTabLocked(const FGameplayTag TabTag) const {
    return false;
}

bool UHUBManagerSubystem::BP_IsTabDisabled(const FGameplayTag TabTag) const {
    return false;
}

bool UHUBManagerSubystem::BP_IsTabBlocked(const FGameplayTag TabTag) const {
    return false;
}

void UHUBManagerSubystem::BP_EnableResourcePrestreaming() {
}

void UHUBManagerSubystem::BP_DisableResourcePrestreaming() {
}


