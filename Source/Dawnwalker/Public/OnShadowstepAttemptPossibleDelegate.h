#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerShadowstepAimingState.h"
#include "OnShadowstepAttemptPossibleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShadowstepAttemptPossible, EDawnwalkerShadowstepAimingState, AimingState);

