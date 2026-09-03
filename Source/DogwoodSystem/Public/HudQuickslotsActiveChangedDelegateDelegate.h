#pragma once
#include "CoreMinimal.h"
#include "HudQuickslotsActiveChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHudQuickslotsActiveChangedDelegate, bool, bActive, bool, bUserInput);

