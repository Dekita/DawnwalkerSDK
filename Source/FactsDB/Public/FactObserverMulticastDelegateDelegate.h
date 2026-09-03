#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactObserverMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFactObserverMulticastDelegate, const FGameplayTag&, FactName);

