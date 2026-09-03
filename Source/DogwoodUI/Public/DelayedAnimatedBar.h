#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "DelayedAnimatedBar.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDelayedAnimatedBar : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* FrontBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* BackgroundBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor DamageBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor HealBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* CurrentlyAnimatedBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDeltaForAnimationDelay;
    
public:
    UDelayedAnimatedBar();

    UFUNCTION(BlueprintCallable)
    void TryUpdateBars(const float& InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPercent(const float& Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetInitialization();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBarValueNoAnimation(const float& Value);
    
};

