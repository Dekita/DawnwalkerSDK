#pragma once
#include "CoreMinimal.h"
#include "EMappinState.h"
#include "EMappinType.h"
#include "OnMappinStateUpdatedMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMappinStateUpdatedMulticastDelegate, int64, ID, EMappinType, Type, EMappinState, State);

