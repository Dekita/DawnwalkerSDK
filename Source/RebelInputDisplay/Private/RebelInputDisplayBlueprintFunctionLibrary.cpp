#include "RebelInputDisplayBlueprintFunctionLibrary.h"

URebelInputDisplayBlueprintFunctionLibrary::URebelInputDisplayBlueprintFunctionLibrary() {
}

FText URebelInputDisplayBlueprintFunctionLibrary::GetRichDisplayTextForKey(const FKey& InKey) {
    return FText::GetEmpty();
}

FMappedRebelInput URebelInputDisplayBlueprintFunctionLibrary::GetKeyFromBindingSetting(const URebelInputMappingSubsystem* InSystem, const FRebelSettingEntry& InEntry, bool bIncludePending) {
    return FMappedRebelInput{};
}

FMappedRebelInput URebelInputDisplayBlueprintFunctionLibrary::GetKeyFromBindingName(const URebelInputMappingSubsystem* InSystem, const FName& InName, bool bIncludePending) {
    return FMappedRebelInput{};
}


