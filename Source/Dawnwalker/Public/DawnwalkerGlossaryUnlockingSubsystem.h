#pragma once
#include "CoreMinimal.h"
#include "RegionData.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "DawnwalkerGlossaryUnlockingSubsystem.generated.h"

class UCombatComponentBase;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerGlossaryUnlockingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDawnwalkerGlossaryUnlockingSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetRequestedDisplayedEntry(const FGameplayTag& Entry);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRegionStatusUpdated(const FRegionData& RegionData, bool bIsNewlyDiscovered, bool EnteredRegion);
    
    UFUNCTION(BlueprintCallable)
    void OnGlossaryEntryUnlocked(const FGameplayTag& EntryTag, bool IsUpdated, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(UCombatComponentBase* Victim, UCombatComponentBase* Killer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetRequestedDisplayedEntry();
    
};

