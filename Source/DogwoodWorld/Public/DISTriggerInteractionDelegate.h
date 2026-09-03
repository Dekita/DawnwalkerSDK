#pragma once
#include "CoreMinimal.h"
#include "DISInteraction.h"
#include "DISTriggerInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDISTriggerInteraction, const FDISInteraction&, InteractionData);

