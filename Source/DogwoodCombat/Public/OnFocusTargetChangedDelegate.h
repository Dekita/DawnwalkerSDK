#pragma once
#include "CoreMinimal.h"
#include "OnFocusTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusTargetChanged, AActor*, TargetActor);

