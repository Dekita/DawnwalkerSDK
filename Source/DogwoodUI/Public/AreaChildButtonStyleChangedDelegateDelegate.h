#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AreaChildButtonStyleChangedDelegateDelegate.generated.h"

class UCommonTextStyle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAreaChildButtonStyleChangedDelegate, TSubclassOf<UCommonTextStyle>, TextStyle);

