#pragma once
#include "CoreMinimal.h"
#include "EQuickslot.h"
#include "EQuickslotResult.h"
#include "HudQuickslotsActiveChangedDelegateDelegate.h"
#include "QuickslotBindingActiveChangedDelegateDelegate.h"
#include "QuickslotSubsystemInterface.h"
#include "QuickslotUpdateDelegateDelegate.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "ItemHandle.h"
#include "InventoryQuickslotSubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UInventoryQuickslotSubsystem : public UWorldSubsystem, public ISaveGameInterface, public IQuickslotSubsystemInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuickslotRechargeStartedDelegate, FGameplayTag, CooldownTag);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotUpdateDelegate OnQuickslotsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotUpdateDelegate OnTorchToggled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotUpdateDelegate OnQuickslotBound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotBindingActiveChangedDelegate OnQuickslotBindingActiveChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudQuickslotsActiveChangedDelegate OnHudQuickslotsActiveChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickslotRechargeStartedDelegate OnQuickslotRechargeStartedDelegate;
    
    UInventoryQuickslotSubsystem();

    UFUNCTION(BlueprintCallable)
    EQuickslotResult TriggerQuickslot(EQuickslot Slot);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInSlot(EQuickslot Slot, const FItemHandle& Item, int32 PresetId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerActiveLoadoutChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemDepleted(const FItemHandle& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerItemStackLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemUsableQuantityLimit(EQuickslot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemUsableQuantity(EQuickslot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemQuickslot(const FItemHandle& ItemHandle, EQuickslot& Result, int32 PresetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemQuantity(const FItemHandle& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetItemInSlot(EQuickslot InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCooldownTag(EQuickslot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetItemInQuickslot(const FItemHandle& Item, int32 PresetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreQuickslotsEnabled();
    

    // Fix for true pure virtual functions not being implemented
};

