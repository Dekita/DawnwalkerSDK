#pragma once
#include "CoreMinimal.h"
#include "OnAttributeChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeChangeDelegate, float, NewValue, float, OldValue);

