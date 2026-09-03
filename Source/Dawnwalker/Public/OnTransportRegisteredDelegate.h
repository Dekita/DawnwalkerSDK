#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnTransportRegisteredDelegate.generated.h"

class ADawnwalkerTransportActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTransportRegistered, FGuid, ID, ADawnwalkerTransportActor*, Transport);

