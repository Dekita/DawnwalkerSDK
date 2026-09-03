#pragma once
#include "CoreMinimal.h"
#include "OnEnteredMappinAreaMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnteredMappinAreaMulticastDelegate, int64, ID);

