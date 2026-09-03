#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EDialogResult.h"
#include "EUIAudioCategory.h"
#include "QuantityDialogDescriptor.h"
#include "AsyncAction_ShowQuantityDialog.generated.h"

class UAsyncAction_ShowQuantityDialog;
class UObject;

UCLASS(Blueprintable)
class DOGWOODUI_API UAsyncAction_ShowQuantityDialog : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuantityDialogActionResult, EDialogResult, Result, int32, Quantity);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuantityDialogActionResult OnResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuantityDialogDescriptor Descriptor;
    
public:
    UAsyncAction_ShowQuantityDialog();

private:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowQuantityDialog* ShowQuantityDialog(UObject* InWorldContextObject, FText Action, int32 MinQuantity, int32 MaxQuantity, int32 CostPerUnit, EUIAudioCategory PopupContext);
    
};

