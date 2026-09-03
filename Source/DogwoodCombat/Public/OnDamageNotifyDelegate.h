#pragma once
#include "CoreMinimal.h"
#include "OnDamageNotifyDelegate.generated.h"

class UCombatAction;
class UCombatComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageNotify, UCombatComponentBase*, Instigator, UCombatAction*, CombatAction);

