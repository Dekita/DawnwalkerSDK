#pragma once
#include "CoreMinimal.h"
#include "OnInspectedSpotDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInspectedSpotDelegate, const FString&, SpotName);

