#pragma once
#include "CoreMinimal.h"
#include "RebelAIForceVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRebelAIForceVisibilityChanged, bool, bValue);

