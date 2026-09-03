#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "DashboardRow.h"
#include "DashboardWidgetBase.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDashboardWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DashboardSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDashboardRow> Tabs;
    
    UDashboardWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UDataTable* GetCustomSetupOverride();
    
};

