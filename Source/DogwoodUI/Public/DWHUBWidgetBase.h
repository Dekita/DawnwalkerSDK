#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DWActivatableWidget.h"
#include "DWHUBWidgetBase.generated.h"

class UCommonActivatableWidgetSwitcher;
class UHubMessage;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWHUBWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* HubSwitcher;
    
public:
    UDWHUBWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestSwitchToTab(const FGameplayTag& TabTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestCloseHub();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessHubMessage(UHubMessage* InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTransitioningChanged(bool bIsTransitioning);
    
};

