#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RebelSettingEntry.h"
#include "Templates/SubclassOf.h"
#include "SettingsFunctionLibrary.generated.h"

class UDataTable;
class UObject;
class USettingTabWidget;

UCLASS(Blueprintable)
class DOGWOODUI_API USettingsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USettingsFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool ResetToDefault(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool ResetToApplied(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool ResetTableToDefault(const UObject* InWorldContextObject, const UDataTable* InTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool IsSetToDefault(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool HasUnappliedChanges(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool HasMissingKeyboardBindings(const UObject* InWorldContextObject, const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDataTable* ConstructDashboardDataTable(const UObject* WorldContextObject, FGameplayTagContainer TabsToSkip, TSubclassOf<USettingTabWidget> WidgetClass);
    
};

