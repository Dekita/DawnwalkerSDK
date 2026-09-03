#pragma once
#include "CoreMinimal.h"
#include "OnTraitLevelAvailableDelegateDelegate.generated.h"

class UTraitAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTraitLevelAvailableDelegate, const UTraitAsset*, Trait, int32, Level, bool, bUnlocked, bool, bShowNotification);

