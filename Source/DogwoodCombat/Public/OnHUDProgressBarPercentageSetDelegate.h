#pragma once
#include "CoreMinimal.h"
#include "OnHUDProgressBarPercentageSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDProgressBarPercentageSet, float, Percentage);

