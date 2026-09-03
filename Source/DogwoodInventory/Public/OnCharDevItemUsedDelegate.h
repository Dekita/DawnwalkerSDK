#pragma once
#include "CoreMinimal.h"
#include "OnCharDevItemUsedDelegate.generated.h"

class UItemCharDevDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharDevItemUsed, const UItemCharDevDataAsset*, CharDevItem);

