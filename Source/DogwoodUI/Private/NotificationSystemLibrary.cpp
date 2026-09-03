#include "NotificationSystemLibrary.h"

UNotificationSystemLibrary::UNotificationSystemLibrary() {
}

void UNotificationSystemLibrary::PushTraitPointsNotification(const UObject* WorldContextObject, const int32 TraitPointsChange) {
}

void UNotificationSystemLibrary::PushTraitLevelAvailableNotification(const UObject* WorldContextObject, const UTraitAsset* Trait, const int32 Level, const bool bUnlocked) {
}

void UNotificationSystemLibrary::PushTimeRewardNotification(const UObject* WorldContextObject, int32 Days) {
}

void UNotificationSystemLibrary::PushTimePassedNotification(const UObject* WorldContextObject) {
}

void UNotificationSystemLibrary::PushRegionEnteredNotification(const UObject* WorldContextObject, const FRegionData& RegionData, bool IsNewlyDiscovered) {
}

void UNotificationSystemLibrary::PushQuestNotification(const UObject* WorldContextObject, UQuest* TargetQuest, EQuestNotificationType NotificationType) {
}

void UNotificationSystemLibrary::PushPerkUnlockedNotification(const UObject* WorldContextObject, const FName& UnlockedTrait) {
}

void UNotificationSystemLibrary::PushNewMappinsDiscoveredNotification(const UObject* WorldContextObject, int32 Count) {
}

void UNotificationSystemLibrary::PushMutationLevelUpNotification(const UObject* WorldContextObject, uint8 Level, const TArray<FName>& UnblockedTraits) {
}

void UNotificationSystemLibrary::PushMappinNotification(const UObject* WorldContextObject, int64 MappinId) {
}

void UNotificationSystemLibrary::PushLevelUpNotification(const UObject* WorldContextObject, uint8 Level) {
}

void UNotificationSystemLibrary::PushItemsNotification(const UObject* WorldContextObject, const TMap<FItemHandle, int32>& Items, bool bItemsRemoved) {
}

void UNotificationSystemLibrary::PushItemNotification(const UObject* WorldContextObject, const FItemHandle& ItemHandle, int32 QuantityDelta, bool bItemsRemoved) {
}

void UNotificationSystemLibrary::PushExperienceNotification(const UObject* WorldContextObject, int32 Experience) {
}

void UNotificationSystemLibrary::PushCurrencyNotification(const UObject* WorldContextObject, ECurrencyType Type, int32 Quantity, bool bItemsRemoved) {
}

void UNotificationSystemLibrary::PushCurrenciesNotification(const UObject* WorldContextObject, const TMap<ECurrencyType, int32>& Currencies, bool bItemsRemoved) {
}

void UNotificationSystemLibrary::PushCraftingRefilledNotification(const UObject* WorldContextObject) {
}

void UNotificationSystemLibrary::PushCraftingRecipeUnlockedNotification(const UObject* WorldContextObject, FItemHandle ItemHandle) {
}


