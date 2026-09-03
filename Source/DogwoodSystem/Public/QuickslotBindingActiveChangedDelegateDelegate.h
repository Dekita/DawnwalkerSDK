#pragma once
#include "CoreMinimal.h"
#include "QuickslotBindingActiveChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuickslotBindingActiveChangedDelegate, bool, bActive);

