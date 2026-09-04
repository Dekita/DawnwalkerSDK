#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "RebelAIStubEquipmentProxy.generated.h"

class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAIStubEquipmentProxy : public UObject {
    GENERATED_BODY()
public:
    URebelAIStubEquipmentProxy();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeLogic();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* GetAIStub() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeinitializeLogic();
    
    UFUNCTION(BlueprintCallable)
    void BP_UnequipWeapon(const FGameplayTag CharacterSlot);
    
    UFUNCTION(BlueprintCallable)
    void BP_UnequipAllWeapons();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* BP_GetWeaponClass(const FGameplayTag ItemSource, const FGameplayTag Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BP_GetItemSourceSlotsArray(const FGameplayTag ItemSource, TArray<FGameplayTag>& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* BP_GetInventoryWeaponClass(const FGameplayTag InventorySlot) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_EquipWeaponClassInAllSlots(UClass* WeaponClass);
    
    UFUNCTION(BlueprintCallable)
    void BP_EquipWeaponClass(const FGameplayTag CharacterSlot, UClass* WeaponClass);
    
    UFUNCTION(BlueprintCallable)
    void BP_EquipInventoryWeapon(const FGameplayTag CharacterSlot, const FGameplayTag InventorySlot);
    
};

