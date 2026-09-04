#pragma once
#include "CoreMinimal.h"
#include "DialogueEventDelegate.generated.h"

class UCinematicDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueEvent, UCinematicDialogue*, Dialogue);

