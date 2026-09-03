#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnTryToSetFastTravelMappinStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTryToSetFastTravelMappinState, const FGameplayTag&, Tag);

