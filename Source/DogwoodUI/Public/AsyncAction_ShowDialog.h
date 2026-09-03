#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DialogResultMCDelegateDelegate.h"
#include "EDialogResult.h"
#include "AsyncAction_ShowDialog.generated.h"

class UAsyncAction_ShowDialog;
class UDialogDescriptor;
class UObject;

UCLASS(Blueprintable)
class DOGWOODUI_API UAsyncAction_ShowDialog : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogResultMCDelegate OnResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDescriptor* Descriptor;
    
public:
    UAsyncAction_ShowDialog();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowDialog* ShowYesNoDialog(UObject* InWorldContextObject, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowDialog* ShowCustomDialog(UObject* InWorldContextObject, FText Title, FText Message, const TMap<EDialogResult, FText>& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowDialog* ShowConfirmDialog(UObject* InWorldContextObject, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowDialog* ShowConfirmCancelDialogWithTimer(UObject* InWorldContextObject, FText Title, FText Message, FText TimeoutMessage, int32 SecondsToClose);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowDialog* ShowConfirmCancelDialog(UObject* InWorldContextObject, FText Title, FText Message);
    
};

