#pragma once
#include "CoreMinimal.h"
#include "OnLevelUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelUp, int32, TraitPointsGained);

