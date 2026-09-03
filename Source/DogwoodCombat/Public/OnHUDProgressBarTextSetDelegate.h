#pragma once
#include "CoreMinimal.h"
#include "OnHUDProgressBarTextSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDProgressBarTextSet, FText, Text);

