#include "RebelAIStubEquipmentProxy.h"

URebelAIStubEquipmentProxy::URebelAIStubEquipmentProxy() {
}

void URebelAIStubEquipmentProxy::InitializeLogic_Implementation() {
}

URebelAIStub* URebelAIStubEquipmentProxy::GetAIStub() const {
    return NULL;
}

void URebelAIStubEquipmentProxy::DeinitializeLogic_Implementation() {
}

void URebelAIStubEquipmentProxy::BP_UnequipWeapon(const FGameplayTag CharacterSlot) {
}

void URebelAIStubEquipmentProxy::BP_UnequipAllWeapons() {
}

UClass* URebelAIStubEquipmentProxy::BP_GetWeaponClass(const FGameplayTag ItemSource, const FGameplayTag Slot) const {
    return NULL;
}

void URebelAIStubEquipmentProxy::BP_GetItemSourceSlotsArray(const FGameplayTag ItemSource, TArray<FGameplayTag>& Result) const {
}

UClass* URebelAIStubEquipmentProxy::BP_GetInventoryWeaponClass(const FGameplayTag InventorySlot) const {
    return NULL;
}

void URebelAIStubEquipmentProxy::BP_EquipWeaponClassInAllSlots(UClass* WeaponClass) {
}

void URebelAIStubEquipmentProxy::BP_EquipWeaponClass(const FGameplayTag CharacterSlot, UClass* WeaponClass) {
}

void URebelAIStubEquipmentProxy::BP_EquipInventoryWeapon(const FGameplayTag CharacterSlot, const FGameplayTag InventorySlot) {
}


