#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "EDogwoodAchievementId.h"
#include "DogwoodAchievementsSubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODACHIEVEMENTS_API UDogwoodAchievementsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDogwoodAchievementsSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievementByTag(const FGameplayTag& FactName);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAchievementByString(const FString& AchievementName, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAchievementByName(FName AchievementName, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAchievementById(EDogwoodAchievementId AchievementId, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void TryToUnlockValleyTrotterAchievement(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void TryToUnlockSelfishAchievement(const FName ItemId, const FGameplayTag& MerchantTag);
    
    UFUNCTION(BlueprintCallable)
    void TryToUnlockDeliveryDelayAchievement(const FGameplayTag& FactName);
    
    UFUNCTION(BlueprintCallable)
    void TryToUnlockArbitersRegaliaAchievement(const FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void TryToUnlockArbitersBladeAchievement(const FName ItemId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTryToSetFastTravelState(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void OnGlossaryEntryUnlocked(const FGameplayTag& EntryTag, bool IsUpdated, bool bSilent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFactChanged(const FGameplayTag& FactName);
    
    UFUNCTION(BlueprintCallable)
    bool IsGoldenAchievementInvenotrySlot(const EEquipmentSlotType Slot);
    
    UFUNCTION(BlueprintCallable)
    void AddAchievementProgress(const FGameplayTag& FactName, int32 Modifier);
    
};

