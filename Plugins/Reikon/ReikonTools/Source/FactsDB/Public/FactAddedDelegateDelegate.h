#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactAddedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFactAddedDelegate, const FGameplayTag&, FactName);

