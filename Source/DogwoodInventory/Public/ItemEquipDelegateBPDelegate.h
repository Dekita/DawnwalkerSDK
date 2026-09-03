#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "ItemHandle.h"
#include "ItemEquipDelegateBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemEquipDelegateBP, const EEquipmentSlotType, SlotType, FItemHandle, Item);

