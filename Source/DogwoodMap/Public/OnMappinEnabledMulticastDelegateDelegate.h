#pragma once
#include "CoreMinimal.h"
#include "OnMappinEnabledMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMappinEnabledMulticastDelegate, int64, ID, bool, bEnabled);

