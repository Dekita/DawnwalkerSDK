#pragma once
#include "CoreMinimal.h"
#include "OnPlayerDealtCriticalDamageDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDealtCriticalDamage, AActor*, Target);

