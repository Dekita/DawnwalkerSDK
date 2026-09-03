#pragma once
#include "CoreMinimal.h"
#include "BossfightStartedDelegateDelegate.generated.h"

class UNPCCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossfightStartedDelegate, UNPCCombatComponent*, BossEnemy);

