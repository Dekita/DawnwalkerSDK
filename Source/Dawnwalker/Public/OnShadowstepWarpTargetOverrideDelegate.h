#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnShadowstepWarpTargetOverrideDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FTransform, FOnShadowstepWarpTargetOverride);

