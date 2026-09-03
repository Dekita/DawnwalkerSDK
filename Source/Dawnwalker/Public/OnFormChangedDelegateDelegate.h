#pragma once
#include "CoreMinimal.h"
#include "EPlayerFormState.h"
#include "OnFormChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFormChangedDelegate, EPlayerFormState, NewForm);

