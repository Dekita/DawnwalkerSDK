#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DWActivatableWidget.h"
#include "DWSkippableWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWSkippableWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipActionConsumesInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SkipActionHandle;
    
public:
    UDWSkippableWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSkipAction();
    
};

