#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FlowComponentDynamicNotifyDelegate.generated.h"

class UFlowComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlowComponentDynamicNotify, UFlowComponent*, FlowComponent, const FGameplayTag&, NotifyTag);

