#pragma once
#include "CoreMinimal.h"
#include "OnShowReadableDelegate.generated.h"

class UReadableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowReadable, const UReadableDataAsset*, ReadableDataAsset);

