#pragma once
#include "CoreMinimal.h"
#include "OnWidgetActivationChangedDelegate.h"
#include "Engine/CancellableAsyncAction.h"
#include "AsyncAction_WaitForWidgetDeactivation.generated.h"

class UAsyncAction_WaitForWidgetDeactivation;
class UCommonActivatableWidget;
class UObject;

UCLASS(Blueprintable)
class DOGWOODUI_API UAsyncAction_WaitForWidgetDeactivation : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetActivationChanged OnDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitUntilActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCommonActivatableWidget> TargetWidget;
    
public:
    UAsyncAction_WaitForWidgetDeactivation();

private:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_WaitForWidgetDeactivation* WaitUntilWidgetDeactivated(const UObject* InWorldContextObject, UCommonActivatableWidget* InWidget, bool NewBWaitUntilActivation);
    
};

