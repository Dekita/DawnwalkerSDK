#pragma once
#include "CoreMinimal.h"
#include "AttackData.h"
#include "OnEnemyAttackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyAttack, const FAttackData&, AttackData);

