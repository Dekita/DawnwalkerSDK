#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DWActivatableWidget.h"
#include "CombatFocusWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCombatFocusWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SelectActionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CancelActionHandle;
    
    UCombatFocusWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActionChosen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActionCanceled();
    
    UFUNCTION(BlueprintCallable)
    void BindInput();
    
};

