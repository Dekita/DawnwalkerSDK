#pragma once
#include "CoreMinimal.h"
#include "OnDamageReflectedNotifyDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageReflectedNotify, const AActor*, AttackerTakenDamage, const AActor*, DefenderReflectedDamage);

