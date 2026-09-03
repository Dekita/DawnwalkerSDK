#pragma once
#include "CoreMinimal.h"
#include "OnTraitEquippedChangeDelegateDelegate.generated.h"

class UTraitAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTraitEquippedChangeDelegate, const UTraitAsset*, Trait, const bool, bEquipped, int32, SlotId);

