#pragma once
#include "CoreMinimal.h"
#include "ShopSpecialChoiceSelectedDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShopSpecialChoiceSelected, const UInventoryComponent*, InventoryComponent);

