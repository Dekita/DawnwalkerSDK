#pragma once
#include "CoreMinimal.h"
#include "OnUpperBodyFreezeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpperBodyFreezeUpdated, float, Value);

