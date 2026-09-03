#pragma once
#include "CoreMinimal.h"
#include "Wound.h"
#include "WoundDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWoundDelegate, const FWound&, Wound);

