#pragma once
#include "CoreMinimal.h"
#include "OnTargetWeakspotChangedDelegate.generated.h"

class UCombatComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetWeakspotChanged, UCombatComponentBase*, InTarget);

