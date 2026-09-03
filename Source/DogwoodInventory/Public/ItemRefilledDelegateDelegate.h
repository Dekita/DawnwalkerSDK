#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "ItemRefilledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemRefilledDelegate, FItemHandle, Handle, int32, Count, bool, bRequestedNotification);

