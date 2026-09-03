#pragma once
#include "CoreMinimal.h"
#include "OnSpotInspectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpotInspectedDelegate, const FName&, SpotName);

