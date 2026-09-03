#pragma once
#include "CoreMinimal.h"
#include "OnTargetedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetedChanged, bool, bIsTargeted);

