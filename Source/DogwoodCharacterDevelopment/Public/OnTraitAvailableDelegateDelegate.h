#pragma once
#include "CoreMinimal.h"
#include "OnTraitAvailableDelegateDelegate.generated.h"

class UTraitAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTraitAvailableDelegate, const UTraitAsset*, Trait);

