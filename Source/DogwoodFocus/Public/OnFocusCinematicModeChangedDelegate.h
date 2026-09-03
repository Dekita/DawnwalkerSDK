#pragma once
#include "CoreMinimal.h"
#include "OnFocusCinematicModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusCinematicModeChanged, bool, bEnabled);

