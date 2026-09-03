#pragma once
#include "CoreMinimal.h"
#include "DogwoodControlsLegendEntry.h"
#include "OnEntryChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEntryChanged, const FDogwoodControlsLegendEntry&, Entry);

