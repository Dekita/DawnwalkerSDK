#pragma once
#include "CoreMinimal.h"
#include "EFadeState.h"
#include "FadeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFade, EFadeState, PreviousFadeState, EFadeState, NextFadeState);

