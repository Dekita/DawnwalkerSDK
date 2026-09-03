#pragma once
#include "CoreMinimal.h"
#include "OnMappinRemovedMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMappinRemovedMulticastDelegate, int64, ID);

