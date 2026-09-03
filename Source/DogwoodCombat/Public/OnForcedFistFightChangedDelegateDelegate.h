#pragma once
#include "CoreMinimal.h"
#include "OnForcedFistFightChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForcedFistFightChangedDelegate, bool, bIsForcedFistFight);

