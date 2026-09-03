#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HoldButtonWidget.generated.h"

class IButtonHoldInterface;
class UButtonHoldInterface;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UHoldButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHoldButtonWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHoldProgress(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonHoldInterfaceProvider(TScriptInterface<IButtonHoldInterface> InProvider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonHoldInterfaceProviderSet(const TScriptInterface<IButtonHoldInterface>& InProvider);
    
};

