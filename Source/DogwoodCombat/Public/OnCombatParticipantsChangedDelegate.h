#pragma once
#include "CoreMinimal.h"
#include "OnCombatParticipantsChangedDelegate.generated.h"

class URebelAIStub;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCombatParticipantsChanged, const URebelAIStub*, Attacker, const URebelAIStub*, Defender);

