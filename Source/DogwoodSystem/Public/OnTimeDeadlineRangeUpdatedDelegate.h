#pragma once
#include "CoreMinimal.h"
#include "DayTime.h"
#include "OnTimeDeadlineRangeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTimeDeadlineRangeUpdated, bool, ShowDeadlineRange, const FDayTime&, TimeRangeStart, const FDayTime&, TimeRangeEnd);

