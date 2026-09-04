#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FlowComponentTagsReplicatedDelegate.generated.h"

class UFlowComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlowComponentTagsReplicated, UFlowComponent*, FlowComponent, const FGameplayTagContainer&, CurrentTags);

