#pragma once
#include "CoreMinimal.h"
#include "OnReadableUsedDelegate.generated.h"

class UReadableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadableUsed, const UReadableDataAsset*, ReadableAsset);

