#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttitude.h"
#include "OnAttitudeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttitudeChangedDelegate, const ECharacterAttitude, Attitude);

