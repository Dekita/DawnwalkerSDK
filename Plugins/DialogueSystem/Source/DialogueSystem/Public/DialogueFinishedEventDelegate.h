#pragma once
#include "CoreMinimal.h"
#include "DialogueFinishedEventDelegate.generated.h"

class UCinematicDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueFinishedEvent, UCinematicDialogue*, Dialogue, const bool, bKeepDialogueState);

