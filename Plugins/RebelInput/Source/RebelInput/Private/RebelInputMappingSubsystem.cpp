#include "RebelInputMappingSubsystem.h"

URebelInputMappingSubsystem::URebelInputMappingSubsystem() {
    this->PlayerMappingSave = NULL;
    this->InputSystem = NULL;
    this->DefaultKeyboardPreset = NULL;
    this->ActiveGamepadInputPreset = NULL;
}

FRebelInputRow URebelInputMappingSubsystem::GetMappingInfo(const FName& InMappingName) const {
    return FRebelInputRow{};
}

FMappedRebelInput URebelInputMappingSubsystem::GetInputForMapping(const FName& InMappingName, bool bIncludePending) const {
    return FMappedRebelInput{};
}

URebelInputPreset* URebelInputMappingSubsystem::GetActiveGamepadPreset() {
    return NULL;
}

bool URebelInputMappingSubsystem::ApplyPendingKeyboardMappings() {
    return false;
}


