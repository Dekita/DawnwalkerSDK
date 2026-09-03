#pragma once
#include "CoreMinimal.h"
#include "AttackData.h"
#include "PerformAttackDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPerformAttackDynamicDelegate, const FAttackData&, AttackData);

