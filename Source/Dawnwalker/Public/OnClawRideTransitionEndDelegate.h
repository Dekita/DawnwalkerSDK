#pragma once
#include "CoreMinimal.h"
#include "OnClawRideTransitionEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClawRideTransitionEnd, bool, bWasInterrupted, bool, bIsClawRiding);

