#pragma once
#include "CoreMinimal.h"
#include "OnAttackWarningDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackWarningDelegate, const bool, bWarningStarted, const FName, WeaponAttachSocket);

