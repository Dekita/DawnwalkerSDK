#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonHoldInterface.h"
#include "ButtonHoldProviderWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UButtonHoldProviderWidget : public UUserWidget, public IButtonHoldInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldProgress;
    
public:
    UButtonHoldProviderWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void StartHold();
    
    UFUNCTION(BlueprintCallable)
    void EndHold();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool IsHoldRequired() const override PURE_VIRTUAL(IsHoldRequired, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetHoldProgress() const override PURE_VIRTUAL(GetHoldProgress, return 0.0f;);
    
};

