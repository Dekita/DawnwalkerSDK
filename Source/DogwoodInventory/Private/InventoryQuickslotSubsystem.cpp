#include "InventoryQuickslotSubsystem.h"

UInventoryQuickslotSubsystem::UInventoryQuickslotSubsystem() {
}

EQuickslotResult UInventoryQuickslotSubsystem::TriggerQuickslot(EQuickslot Slot) {
    return EQuickslotResult::Invalid;
}

void UInventoryQuickslotSubsystem::SetItemInSlot(EQuickslot Slot, const FItemHandle& Item, int32 PresetId) {
}

void UInventoryQuickslotSubsystem::OnPlayerActiveLoadoutChanged() {
}

bool UInventoryQuickslotSubsystem::IsItemDepleted(const FItemHandle& Item) const {
    return false;
}

int32 UInventoryQuickslotSubsystem::GetPlayerItemStackLimit() const {
    return 0;
}

int32 UInventoryQuickslotSubsystem::GetItemUsableQuantityLimit(EQuickslot Slot) {
    return 0;
}

int32 UInventoryQuickslotSubsystem::GetItemUsableQuantity(EQuickslot Slot) {
    return 0;
}

bool UInventoryQuickslotSubsystem::GetItemQuickslot(const FItemHandle& ItemHandle, EQuickslot& Result, int32 PresetId) {
    return false;
}

int32 UInventoryQuickslotSubsystem::GetItemQuantity(const FItemHandle& Item) const {
    return 0;
}

FItemHandle UInventoryQuickslotSubsystem::GetItemInSlot(EQuickslot InSlot) {
    return FItemHandle{};
}

FGameplayTag UInventoryQuickslotSubsystem::GetCooldownTag(EQuickslot Slot) const {
    return FGameplayTag{};
}

float UInventoryQuickslotSubsystem::GetCooldownDuration() const {
    return 0.0f;
}

bool UInventoryQuickslotSubsystem::CanSetItemInQuickslot(const FItemHandle& Item, int32 PresetId) const {
    return false;
}

bool UInventoryQuickslotSubsystem::AreQuickslotsEnabled() {
    return false;
}


