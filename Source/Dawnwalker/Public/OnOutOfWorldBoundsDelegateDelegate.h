#pragma once
#include "CoreMinimal.h"
#include "WorldBorderDef.h"
#include "OnOutOfWorldBoundsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOutOfWorldBoundsDelegate, bool, IsOutOfBounds, const FWorldBorderDef&, Border);

