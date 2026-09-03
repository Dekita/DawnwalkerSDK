#pragma once
#include "CoreMinimal.h"
#include "OnParryWindowOpenedDelegate.generated.h"

class UCombatComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnParryWindowOpened, UCombatComponentBase*, InTarget);

