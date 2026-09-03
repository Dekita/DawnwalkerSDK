#pragma once
#include "CoreMinimal.h"
#include "RegionData.h"
#include "Subsystems/WorldSubsystem.h"
#include "DawnwalkerXpGrantingSubsystem.generated.h"

class UCombatComponentBase;
class UReadableDataAsset;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerXpGrantingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDawnwalkerXpGrantingSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnRegionStatusUpdated(const FRegionData& RegionData, bool bIsNewlyDiscovered, bool EnteredRegion);
    
    UFUNCTION(BlueprintCallable)
    void OnReadableUnlocked(const UReadableDataAsset* ReadableDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(UCombatComponentBase* Victim, UCombatComponentBase* Killer);
    
};

