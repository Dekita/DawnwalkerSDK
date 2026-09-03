#include "RebelSettingsUIBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

URebelSettingsUIBlueprintFunctionLibrary::URebelSettingsUIBlueprintFunctionLibrary() {
}

bool URebelSettingsUIBlueprintFunctionLibrary::UpdateSettings(const FRebelSettingEntry& Entry, float NewValue) {
    return false;
}

bool URebelSettingsUIBlueprintFunctionLibrary::IsSettingVisibleInCurrentRegion(const FRebelSettingEntry& Entry) {
    return false;
}

bool URebelSettingsUIBlueprintFunctionLibrary::IsSettingVisible(const FRebelSettingEntry& Entry) {
    return false;
}

bool URebelSettingsUIBlueprintFunctionLibrary::IsSettingInCurrentPlatformGroup(const FRebelSettingEntry& Entry) {
    return false;
}

bool URebelSettingsUIBlueprintFunctionLibrary::IsSettingEditable(const FRebelSettingEntry& InEntry) {
    return false;
}

bool URebelSettingsUIBlueprintFunctionLibrary::IsControlEditable(FInstancedStruct InControlType) {
    return false;
}

float URebelSettingsUIBlueprintFunctionLibrary::GetSliderValue(const FRebelSettingEntry& Entry) {
    return 0.0f;
}

ENumericValueType URebelSettingsUIBlueprintFunctionLibrary::GetSliderType(const FInstancedStruct& InSlider) {
    return ENumericValueType::Integer;
}

float URebelSettingsUIBlueprintFunctionLibrary::GetSliderMinimumValue(const FInstancedStruct& InSlider) {
    return 0.0f;
}

float URebelSettingsUIBlueprintFunctionLibrary::GetSliderMaximumValue(const FInstancedStruct& InSlider) {
    return 0.0f;
}

FText URebelSettingsUIBlueprintFunctionLibrary::GetSettingName(const FRebelSettingEntry& InEntry) {
    return FText::GetEmpty();
}

FText URebelSettingsUIBlueprintFunctionLibrary::GetSettingDescription(const FRebelSettingEntry& InEntry) {
    return FText::GetEmpty();
}

int32 URebelSettingsUIBlueprintFunctionLibrary::GetPickerValue(const FRebelSettingEntry& Entry) {
    return 0;
}

TArray<FPickerSetting> URebelSettingsUIBlueprintFunctionLibrary::GetPickerSettingInfo(const UObject* InWorldContext, const FRebelSettingEntry& Entry) {
    return TArray<FPickerSetting>();
}

FText URebelSettingsUIBlueprintFunctionLibrary::GetNumericControlLabelForEntry(float Value, const FRebelSettingEntry& InEntry) {
    return FText::GetEmpty();
}

TSubclassOf<URebelSettingEntryWidgetBase> URebelSettingsUIBlueprintFunctionLibrary::GetCustomWidgetForEntry(const FRebelSettingEntry& Entry) {
    return NULL;
}

ERebelSettingControlType URebelSettingsUIBlueprintFunctionLibrary::GetControlTypeForEntry(const FRebelSettingEntry& Entry) {
    return ERebelSettingControlType::Invalid;
}

TArray<FName> URebelSettingsUIBlueprintFunctionLibrary::CollectValidEntryNamesFromTable(const UDataTable* InTable) {
    return TArray<FName>();
}

FEventReply URebelSettingsUIBlueprintFunctionLibrary::BP_UpdateAnalogSliderValue(const UAnalogSlider* SliderWidget, const FGeometry& MyGeometry, const FAnalogInputEvent& InAnalogInputEvent) {
    return FEventReply{};
}


