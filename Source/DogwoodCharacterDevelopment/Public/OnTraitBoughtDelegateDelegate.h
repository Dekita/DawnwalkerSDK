#pragma once
#include "CoreMinimal.h"
#include "OnTraitBoughtDelegateDelegate.generated.h"

class UTraitAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTraitBoughtDelegate, const UTraitAsset*, Trait);

