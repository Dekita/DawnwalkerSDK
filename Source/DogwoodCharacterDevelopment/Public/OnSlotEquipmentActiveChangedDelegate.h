#pragma once
#include "CoreMinimal.h"
#include "OnSlotEquipmentActiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotEquipmentActiveChanged, const bool, bActive);

