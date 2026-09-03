#include "DogwoodAchievementsSubsystem.h"

UDogwoodAchievementsSubsystem::UDogwoodAchievementsSubsystem() {
}

void UDogwoodAchievementsSubsystem::UnlockAchievementByTag(const FGameplayTag& FactName) {
}

void UDogwoodAchievementsSubsystem::UnlockAchievementByString(const FString& AchievementName, float Progress) {
}

void UDogwoodAchievementsSubsystem::UnlockAchievementByName(FName AchievementName, float Progress) {
}

void UDogwoodAchievementsSubsystem::UnlockAchievementById(EDogwoodAchievementId AchievementId, float Progress) {
}

void UDogwoodAchievementsSubsystem::TryToUnlockValleyTrotterAchievement(const FGameplayTag& Tag) {
}

void UDogwoodAchievementsSubsystem::TryToUnlockSelfishAchievement(const FName ItemId, const FGameplayTag& MerchantTag) {
}

void UDogwoodAchievementsSubsystem::TryToUnlockDeliveryDelayAchievement(const FGameplayTag& FactName) {
}

void UDogwoodAchievementsSubsystem::TryToUnlockArbitersRegaliaAchievement(const FName ItemId) {
}

void UDogwoodAchievementsSubsystem::TryToUnlockArbitersBladeAchievement(const FName ItemId) {
}

void UDogwoodAchievementsSubsystem::OnTryToSetFastTravelState(const FGameplayTag& Tag) {
}

void UDogwoodAchievementsSubsystem::OnGlossaryEntryUnlocked(const FGameplayTag& EntryTag, bool IsUpdated, bool bSilent) {
}

void UDogwoodAchievementsSubsystem::OnFactChanged(const FGameplayTag& FactName) {
}

bool UDogwoodAchievementsSubsystem::IsGoldenAchievementInvenotrySlot(const EEquipmentSlotType Slot) {
    return false;
}

void UDogwoodAchievementsSubsystem::AddAchievementProgress(const FGameplayTag& FactName, int32 Modifier) {
}


