#pragma once
#include "CoreMinimal.h"
#include "OnTransportPawnKilledDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTransportPawnKilled, APawn*, KilledPawn);

