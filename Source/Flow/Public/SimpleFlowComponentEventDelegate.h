#pragma once
#include "CoreMinimal.h"
#include "SimpleFlowComponentEventDelegate.generated.h"

class UFlowComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleFlowComponentEvent, UFlowComponent*, Component);

