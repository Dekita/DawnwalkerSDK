#pragma once
#include "CoreMinimal.h"
#include "OnHUDProgressBarToggledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDProgressBarToggled, bool, bEnabled);

