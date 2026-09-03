#pragma once
#include "CoreMinimal.h"
#include "ERebelIndicatorIconType.h"
#include "RebelAIIndicatorIconTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRebelAIIndicatorIconTypeChanged, ERebelIndicatorIconType, IconType);

