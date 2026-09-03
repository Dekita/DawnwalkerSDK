#pragma once
#include "CoreMinimal.h"
#include "EFadeState.h"
#include "OnFadingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFading, EFadeState, NextFadeState, float, CurrentFadeAmount);

