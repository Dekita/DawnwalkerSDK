#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChoiceSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChoiceSelected, FGuid, ChoiceGuid, int32, ChoiceIndex, bool, bWasForced);

