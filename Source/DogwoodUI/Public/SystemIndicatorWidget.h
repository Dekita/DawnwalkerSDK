#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SystemIndicatorWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API USystemIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LoopAnim;
    
public:
    USystemIndicatorWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(bool bInActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHoldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_GetHoldTime(float& OutHoldTime) const;
    
};

