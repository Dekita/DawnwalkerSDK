#include "CharacterDevelopmentQuickslotSubsystem.h"

UCharacterDevelopmentQuickslotSubsystem::UCharacterDevelopmentQuickslotSubsystem() {
}

void UCharacterDevelopmentQuickslotSubsystem::TrySetAbilityInFirstFreeSlot(FCharacterDevelopmentLoadoutSlotInfo LoadoutSlot, EDayPhase DayPhase) {
}

void UCharacterDevelopmentQuickslotSubsystem::SetAbilityInSlot(EQuickslot Slot, FCharacterDevelopmentLoadoutSlotInfo LoadoutSlot, EDayPhase DayPhase) {
}

void UCharacterDevelopmentQuickslotSubsystem::OnTraitEquippedChanged(const UTraitAsset* Trait, const bool bEquipped, int32 SlotId) {
}

int32 UCharacterDevelopmentQuickslotSubsystem::GetQuickslotPreset(EDayPhase DayPhase) const {
    return 0;
}

FCharacterDevelopmentLoadoutSlotInfo UCharacterDevelopmentQuickslotSubsystem::GetLoadoutInfoInSlot(EQuickslot InSlot, EDayPhase DayPhase) {
    return FCharacterDevelopmentLoadoutSlotInfo{};
}

UFocusAbilityBase* UCharacterDevelopmentQuickslotSubsystem::GetAbilityInSlot(EQuickslot InSlot, EDayPhase DayPhase) {
    return NULL;
}


