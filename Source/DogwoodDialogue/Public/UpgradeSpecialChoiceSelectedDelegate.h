#pragma once
#include "CoreMinimal.h"
#include "UpgradeSpecialChoiceSelectedDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpgradeSpecialChoiceSelected, const UInventoryComponent*, InventoryComponent);

