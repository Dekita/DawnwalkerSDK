#pragma once
#include "CoreMinimal.h"
#include "ReadSpecialChoiceSelectedDelegate.generated.h"

class UReadableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReadSpecialChoiceSelected, const TSoftObjectPtr<UReadableDataAsset>, ReadableObject);

