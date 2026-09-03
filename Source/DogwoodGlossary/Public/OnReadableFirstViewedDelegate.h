#pragma once
#include "CoreMinimal.h"
#include "OnReadableFirstViewedDelegate.generated.h"

class UReadableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadableFirstViewed, const UReadableDataAsset*, ReadableDataAsset);

