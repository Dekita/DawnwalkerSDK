#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EFadeState.h"
#include "FadeDelegate.h"
#include "OnFadingDelegate.h"
#include "FadeOverlay.generated.h"

class UImage;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UFadeOverlay : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFade OnFadeStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFading OnFading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Overlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* Spinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutSpinnerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInSpinnerAnim;
    
public:
    UFadeOverlay();

    UFUNCTION(BlueprintCallable)
    void StopFade();
    
    UFUNCTION(BlueprintCallable)
    bool StartFade(float ToAlpha, float duration, FLinearColor Color, bool bHoldWhenFinished);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bInPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetManualFade(float InFadeAmount, FLinearColor Color);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpinnerFadeOutFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFadeState GetNextFadeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFadeState GetCurrentFadeState() const;
    
    UFUNCTION(BlueprintCallable)
    EFadeState CheckFadeState();
    
};

