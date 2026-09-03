#pragma once
#include "CoreMinimal.h"
#include "OnPreCombatAggressionChangeDelegateDelegate.generated.h"

class URebelAIStub;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPreCombatAggressionChangeDelegate, bool, bAggressiveState, const URebelAIStub*, Guard);

