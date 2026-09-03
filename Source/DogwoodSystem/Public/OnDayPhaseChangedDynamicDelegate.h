#pragma once
#include "CoreMinimal.h"
#include "EDayPhase.h"
#include "OnDayPhaseChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDayPhaseChangedDynamic, EDayPhase, DayPhase);

