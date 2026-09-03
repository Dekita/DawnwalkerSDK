#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "ItemHandle.h"
#include "RegionData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EQuestNotificationType.h"
#include "NotificationSystemLibrary.generated.h"

class UObject;
class UQuest;
class UTraitAsset;

UCLASS(Blueprintable)
class DOGWOODUI_API UNotificationSystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNotificationSystemLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushTraitPointsNotification(const UObject* WorldContextObject, const int32 TraitPointsChange);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushTraitLevelAvailableNotification(const UObject* WorldContextObject, const UTraitAsset* Trait, const int32 Level, const bool bUnlocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushTimeRewardNotification(const UObject* WorldContextObject, int32 Days);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushTimePassedNotification(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushRegionEnteredNotification(const UObject* WorldContextObject, const FRegionData& RegionData, bool IsNewlyDiscovered);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushQuestNotification(const UObject* WorldContextObject, UQuest* TargetQuest, EQuestNotificationType NotificationType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushPerkUnlockedNotification(const UObject* WorldContextObject, const FName& UnlockedTrait);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushNewMappinsDiscoveredNotification(const UObject* WorldContextObject, int32 Count);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushMutationLevelUpNotification(const UObject* WorldContextObject, uint8 Level, const TArray<FName>& UnblockedTraits);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushMappinNotification(const UObject* WorldContextObject, int64 MappinId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushLevelUpNotification(const UObject* WorldContextObject, uint8 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushItemsNotification(const UObject* WorldContextObject, const TMap<FItemHandle, int32>& Items, bool bItemsRemoved);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushItemNotification(const UObject* WorldContextObject, const FItemHandle& ItemHandle, int32 QuantityDelta, bool bItemsRemoved);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushExperienceNotification(const UObject* WorldContextObject, int32 Experience);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushCurrencyNotification(const UObject* WorldContextObject, ECurrencyType Type, int32 Quantity, bool bItemsRemoved);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushCurrenciesNotification(const UObject* WorldContextObject, const TMap<ECurrencyType, int32>& Currencies, bool bItemsRemoved);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushCraftingRefilledNotification(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PushCraftingRecipeUnlockedNotification(const UObject* WorldContextObject, FItemHandle ItemHandle);
    
};

