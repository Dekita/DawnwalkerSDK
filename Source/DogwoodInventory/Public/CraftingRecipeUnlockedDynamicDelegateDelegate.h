#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "CraftingRecipeUnlockedDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCraftingRecipeUnlockedDynamicDelegate, FItemHandle, ItemHandle);

