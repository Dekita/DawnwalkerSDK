#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "DWDialogBase.generated.h"

class UCommonTextBlock;
class UDialogDescriptor;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWDialogBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TitleLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TimeoutTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* ButtonEntryBox;
    
public:
    UDWDialogBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTimerDisplay(UDialogDescriptor* InDescriptor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimerTick(int32 SecondsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyWindowClosed();
    
};

