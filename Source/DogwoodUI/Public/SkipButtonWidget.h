#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/DataTable.h"
#include "SkipDelegateDelegate.h"
#include "SkipButtonWidget.generated.h"

class UCommonActionWidget;
class UInputAction;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API USkipButtonWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputActionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SkipInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* SkipEnhancedInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldSkipButtonAfterPressing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipOnAnyInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkipDelegate BP_OnSkip;
    
    USkipButtonWidget();

    UFUNCTION(BlueprintCallable)
    void SetBlocked(bool bBlockShowing);
    
    UFUNCTION(BlueprintCallable)
    void OnShowAnimationFinished();
    
};

