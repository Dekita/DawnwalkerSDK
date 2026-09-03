#pragma once
#include "CoreMinimal.h"
#include "OnItemRemovedDelegate.generated.h"

class UItemBaseDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemRemoved, const UItemBaseDataAsset*, Item, const int32, Quantity);

