#include "RebelInputPreset.h"

URebelInputPreset::URebelInputPreset() {
    this->Type = ERebelInputPresetType::Gamepad;
    this->Parent = NULL;
}

bool URebelInputPreset::GetBuiltPresetMapping(TMap<FName, FRebelPresetMappingSettings>& Output) const {
    return false;
}


