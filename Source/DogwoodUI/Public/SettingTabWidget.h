#pragma once
#include "CoreMinimal.h"
#include "RebelSettingEntry.h"
#include "DWActivatableWidget.h"
#include "SettingTabWidget.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API USettingTabWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    USettingTabWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPanelFromTable(UDataTable* InTable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateSettingWidget(const FRebelSettingEntry& InEntry);
    
};

