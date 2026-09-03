#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TitleCardWidget.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UTitleCardWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UTitleCardWidget();

    UFUNCTION(BlueprintCallable)
    void ShowTitle(const FText& InTitle, float InFadeInDuration, float InHoldDuration, float InFadeOutDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastEndAndCleanup();
    
};

