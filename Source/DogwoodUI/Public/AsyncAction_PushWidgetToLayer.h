#pragma once
#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "GameplayTagContainer.h"
#include "PushContentToLayerForPlayerAsyncDelegateDelegate.h"
#include "AsyncAction_PushWidgetToLayer.generated.h"

class UAsyncAction_PushWidgetToLayer;
class UCommonActivatableWidget;
class UObject;

UCLASS(Blueprintable)
class DOGWOODUI_API UAsyncAction_PushWidgetToLayer : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushContentToLayerForPlayerAsyncDelegate BeforePush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushContentToLayerForPlayerAsyncDelegate AfterPush;
    
    UAsyncAction_PushWidgetToLayer();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_PushWidgetToLayer* PushWidgetToLayer(UObject* InWorldContextObject, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, FGameplayTag LayerName, bool bSuspendInputUntilComplete);
    
};

