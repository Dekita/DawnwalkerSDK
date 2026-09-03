#pragma once
#include "CoreMinimal.h"
#include "OnCharacterDiedDelegate.generated.h"

class UCombatComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterDied, UCombatComponentBase*, Victim, UCombatComponentBase*, Killer);

