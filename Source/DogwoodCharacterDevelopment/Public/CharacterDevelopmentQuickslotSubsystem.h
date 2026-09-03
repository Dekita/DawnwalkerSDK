#pragma once
#include "CoreMinimal.h"
#include "EDayPhase.h"
#include "EQuickslot.h"
#include "HudQuickslotsActiveChangedDelegateDelegate.h"
#include "QuickslotBindingActiveChangedDelegateDelegate.h"
#include "QuickslotSubsystemInterface.h"
#include "QuickslotUpdateDelegateDelegate.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "CharacterDevelopmentLoadoutSlotInfo.h"
#include "CharacterDevelopmentQuickslotSubsystem.generated.h"

class UFocusAbilityBase;
class UTraitAsset;

UCLASS(Blueprintable)
class DOGWOODCHARACTERDEVELOPMENT_API UCharacterDevelopmentQuickslotSubsystem : public UWorldSubsystem, public ISaveGameInterface, public IQuickslotSubsystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotUpdateDelegate OnQuickslotsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotUpdateDelegate OnQuickslotBound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotBindingActiveChangedDelegate OnQuickslotBindingActiveChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudQuickslotsActiveChangedDelegate OnHudQuickslotsActiveChangedDelegate;
    
    UCharacterDevelopmentQuickslotSubsystem();

    UFUNCTION(BlueprintCallable)
    void TrySetAbilityInFirstFreeSlot(FCharacterDevelopmentLoadoutSlotInfo LoadoutSlot, EDayPhase DayPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityInSlot(EQuickslot Slot, FCharacterDevelopmentLoadoutSlotInfo LoadoutSlot, EDayPhase DayPhase);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTraitEquippedChanged(const UTraitAsset* Trait, const bool bEquipped, int32 SlotId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuickslotPreset(EDayPhase DayPhase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterDevelopmentLoadoutSlotInfo GetLoadoutInfoInSlot(EQuickslot InSlot, EDayPhase DayPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFocusAbilityBase* GetAbilityInSlot(EQuickslot InSlot, EDayPhase DayPhase);
    

    // Fix for true pure virtual functions not being implemented
};

