#pragma once
#include "CoreMinimal.h"
#include "ProgressTimeAbsoluteSpecialChoiceSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProgressTimeAbsoluteSpecialChoiceSelected, int32, Hours, int32, Minutes);

