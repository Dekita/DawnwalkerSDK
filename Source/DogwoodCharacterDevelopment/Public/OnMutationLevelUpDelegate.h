#pragma once
#include "CoreMinimal.h"
#include "OnMutationLevelUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMutationLevelUp, int32, Level, const TArray<FName>&, UnblockedTraits);

