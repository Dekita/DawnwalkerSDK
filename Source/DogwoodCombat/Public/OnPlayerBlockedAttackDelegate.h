#pragma once
#include "CoreMinimal.h"
#include "OnPlayerBlockedAttackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerBlockedAttack, AActor*, Target);

