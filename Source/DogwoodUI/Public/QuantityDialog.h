#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "QuantityDialogDescriptor.h"
#include "QuantityDialog.generated.h"

class UDWButtonBase;
class USlider;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UQuantityDialog : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuantityDialogDescriptor ActiveDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* QuantitySlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWButtonBase* ConfirmAllButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWButtonBase* ConfirmButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWButtonBase* CancelButton;
    
public:
    UQuantityDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseWindow();
    
};

