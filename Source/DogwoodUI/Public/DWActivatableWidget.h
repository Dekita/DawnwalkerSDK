#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/EngineBaseTypes.h"
#include "GameplayTagContainer.h"
#include "LoadingScreenBlockerInterface.h"
#include "Components/SlateWrapperTypes.h"
#include "EDWWidgetInputMode.h"
#include "DWActivatableWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWActivatableWidget : public UCommonActivatableWidget, public ILoadingScreenBlockerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDWWidgetInputMode InputConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseCaptureMode GameMouseCaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterAsPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsLoadingScreenPrevention;
    
public:
    UDWActivatableWidget();

    UFUNCTION(BlueprintCallable)
    void TriggerBackActionInParent();
    
    UFUNCTION(BlueprintCallable)
    void TriggerBackAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldBlockLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInitialArguments(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetActionDomainOverrideEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPopup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply HandleCancelAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EDWWidgetInputMode GetInputModeOverride() const;
    

    // Fix for true pure virtual functions not being implemented
};

