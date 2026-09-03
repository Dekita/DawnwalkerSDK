#pragma once
#include "CoreMinimal.h"
#include "OnPlayerAppliedBleedingDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerAppliedBleeding, AActor*, Target);

