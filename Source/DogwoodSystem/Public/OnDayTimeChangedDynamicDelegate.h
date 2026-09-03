#pragma once
#include "CoreMinimal.h"
#include "DayTime.h"
#include "OnDayTimeChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDayTimeChangedDynamic, const FDayTime&, PrevGameTime, const FDayTime&, CurrentGameTime);

