#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMappinState.h"
#include "EMappinType.h"
#include "OnMappinAddedMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnMappinAddedMulticastDelegate, int64, ID, EMappinType, Type, EMappinState, State, bool, bEnabled, FVector, Location);

