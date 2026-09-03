#pragma once
#include "CoreMinimal.h"
#include "OnItemAddedDelegate.generated.h"

class UItemBaseDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAdded, const UItemBaseDataAsset*, Item, const int32, Quantity);

