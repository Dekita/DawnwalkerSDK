#pragma once
#include "CoreMinimal.h"
#include "ItemsRefilledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemsRefilledDelegate, bool, bRequestedNotification);

