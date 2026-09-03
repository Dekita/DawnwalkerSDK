#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLandedSuccessfulAttackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLandedSuccessfulAttack, AActor*, Target);

