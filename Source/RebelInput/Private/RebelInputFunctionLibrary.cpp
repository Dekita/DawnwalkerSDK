#include "RebelInputFunctionLibrary.h"

URebelInputFunctionLibrary::URebelInputFunctionLibrary() {
}

TArray<FRebelInputRow> URebelInputFunctionLibrary::GetPrioritizedInputsForKey(const URebelInputMappingSubsystem* InRebelInputSystem, const URebelInputPreset* InPreset, const FKey& InKey) {
    return TArray<FRebelInputRow>();
}

TArray<FName> URebelInputFunctionLibrary::GetAvailableActionNames() {
    return TArray<FName>();
}

void URebelInputFunctionLibrary::DisableInputForDuration(float duration) {
}


