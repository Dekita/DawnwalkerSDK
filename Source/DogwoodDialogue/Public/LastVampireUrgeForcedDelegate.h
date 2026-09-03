#pragma once
#include "CoreMinimal.h"
#include "LastVampireUrgeForcedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLastVampireUrgeForced, bool, bForced);

