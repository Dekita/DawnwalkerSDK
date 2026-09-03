#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "OnInventorySoldDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventorySold, const FItemHandle&, Item, const UInventoryComponent*, DestinationInventory);

