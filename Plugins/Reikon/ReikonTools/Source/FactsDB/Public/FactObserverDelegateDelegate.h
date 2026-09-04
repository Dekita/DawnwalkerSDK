#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactObserverDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFactObserverDelegate, const FGameplayTag&, FactName);

