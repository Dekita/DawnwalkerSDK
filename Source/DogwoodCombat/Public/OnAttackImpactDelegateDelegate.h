#pragma once
#include "CoreMinimal.h"
#include "AttackData.h"
#include "OnAttackImpactDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackImpactDelegate, const FAttackData&, AttackData, const FAttackData&, OpponentResponse);

