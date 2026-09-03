#pragma once
#include "CoreMinimal.h"
#include "PreCombatStartedDelegateDelegate.generated.h"

class URebelAIStub;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreCombatStartedDelegate, const URebelAIStub*, Guard);

