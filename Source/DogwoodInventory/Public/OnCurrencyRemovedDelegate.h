#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "OnCurrencyRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrencyRemoved, const ECurrencyType, Currency, const int32, Quantity);

