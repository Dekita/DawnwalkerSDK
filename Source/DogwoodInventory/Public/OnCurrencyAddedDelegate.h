#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "OnCurrencyAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrencyAdded, const ECurrencyType, Currency, const int32, Quantity);

