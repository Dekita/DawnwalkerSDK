#pragma once
#include "CoreMinimal.h"
#include "EDialogResult.h"
#include "DialogResultMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogResultMCDelegate, EDialogResult, Result);

