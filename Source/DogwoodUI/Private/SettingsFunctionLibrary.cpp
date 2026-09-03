#include "SettingsFunctionLibrary.h"
#include "Templates/SubclassOf.h"

USettingsFunctionLibrary::USettingsFunctionLibrary() {
}

bool USettingsFunctionLibrary::ResetToDefault(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry) {
    return false;
}

bool USettingsFunctionLibrary::ResetToApplied(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry) {
    return false;
}

bool USettingsFunctionLibrary::ResetTableToDefault(const UObject* InWorldContextObject, const UDataTable* InTable) {
    return false;
}

bool USettingsFunctionLibrary::IsSetToDefault(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry) {
    return false;
}

bool USettingsFunctionLibrary::HasUnappliedChanges(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry) {
    return false;
}

bool USettingsFunctionLibrary::HasMissingKeyboardBindings(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry) {
    return false;
}

UDataTable* USettingsFunctionLibrary::ConstructDashboardDataTable(const UObject* WorldContextObject, FGameplayTagContainer TabsToSkip, TSubclassOf<USettingTabWidget> WidgetClass) {
    return NULL;
}


