#pragma once
#include "CoreMinimal.h"
#include "TraitPointsChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTraitPointsChangedDelegate, int32, TraitPointsChange);

