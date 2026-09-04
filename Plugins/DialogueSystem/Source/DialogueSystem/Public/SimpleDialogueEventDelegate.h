#pragma once
#include "CoreMinimal.h"
#include "SimpleDialogueEventDelegate.generated.h"

class UCinematicDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDialogueEvent, const UCinematicDialogue*, Dialogue);

