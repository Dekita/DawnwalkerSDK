#pragma once
#include "CoreMinimal.h"
#include "CommonActionWidget.h"
#include "RebelInputWidget.generated.h"

UCLASS(Blueprintable)
class REBELINPUTDISPLAY_API URebelInputWidget : public UCommonActionWidget {
    GENERATED_BODY()
public:
    URebelInputWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateActionWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetHoldDisplayOverride(bool bInOverride);
    
    UFUNCTION(BlueprintCallable)
    void OnActionProgress(float HeldPercent);
    
};

