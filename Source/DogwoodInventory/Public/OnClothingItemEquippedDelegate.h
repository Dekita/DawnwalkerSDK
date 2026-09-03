#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "ItemHandle.h"
#include "OnClothingItemEquippedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClothingItemEquipped, const EEquipmentSlotType, SlotType, FItemHandle, Item);

