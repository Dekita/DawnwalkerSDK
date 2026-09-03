#pragma once
#include "CoreMinimal.h"
#include "OnInteractionEndPlayDelegate.generated.h"

class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionEndPlay, UInteractableComponent*, Component);

