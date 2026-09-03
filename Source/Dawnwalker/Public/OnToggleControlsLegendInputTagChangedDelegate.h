#pragma once
#include "CoreMinimal.h"
#include "OnToggleControlsLegendInputTagChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleControlsLegendInputTagChanged, bool, bTagPresent);

