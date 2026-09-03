#pragma once
#include "CoreMinimal.h"
#include "ItemPaymentSpecialChoicePayload.h"
#include "ItemPaymentSpecialChoiceSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemPaymentSpecialChoiceSelected, const FItemPaymentSpecialChoicePayload&, Payload);

