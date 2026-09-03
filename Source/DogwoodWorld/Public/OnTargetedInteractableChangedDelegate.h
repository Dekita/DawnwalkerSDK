#pragma once
#include "CoreMinimal.h"
#include "OnTargetedInteractableChangedDelegate.generated.h"

class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetedInteractableChanged, UInteractableComponent*, Interactable);

