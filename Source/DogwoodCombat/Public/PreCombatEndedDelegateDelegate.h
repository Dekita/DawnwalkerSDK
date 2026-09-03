#pragma once
#include "CoreMinimal.h"
#include "PreCombatEndedDelegateDelegate.generated.h"

class URebelAIStub;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreCombatEndedDelegate, const URebelAIStub*, Guard);

