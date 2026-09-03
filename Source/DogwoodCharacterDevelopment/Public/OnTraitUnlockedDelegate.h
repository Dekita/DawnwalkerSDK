#pragma once
#include "CoreMinimal.h"
#include "OnTraitUnlockedDelegate.generated.h"

class UTraitAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTraitUnlocked, const UTraitAsset*, Trait);

