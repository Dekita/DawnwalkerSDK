#pragma once
#include "CoreMinimal.h"
#include "OnExitedMappinAreaMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExitedMappinAreaMulticastDelegate, int64, ID);

