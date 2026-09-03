#pragma once
#include "CoreMinimal.h"
#include "OnStunAttackReceivedDelegateDelegate.generated.h"

class UCombatComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStunAttackReceivedDelegate, UCombatComponentBase*, Instigator);

