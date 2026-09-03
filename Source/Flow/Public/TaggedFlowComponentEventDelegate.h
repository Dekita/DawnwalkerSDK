#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedFlowComponentEventDelegate.generated.h"

class UFlowComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTaggedFlowComponentEvent, UFlowComponent*, Component, const FGameplayTagContainer&, Tags);

