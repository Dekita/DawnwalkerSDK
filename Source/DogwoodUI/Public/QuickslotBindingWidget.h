#pragma once
#include "CoreMinimal.h"
#include "EQuickslot.h"
#include "Engine/DataTable.h"
#include "DWActivatableWidget.h"
#include "QuickslotBindingInfo.h"
#include "QuickslotBindingWidget.generated.h"

class UInputAction;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UQuickslotBindingWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQuickslot, FQuickslotBindingInfo> Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ChangeConfigEnhancedInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CancelActionHandle;
    
public:
    UQuickslotBindingWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindItemToQuickslot(EQuickslot TargetSlot);
    
};

