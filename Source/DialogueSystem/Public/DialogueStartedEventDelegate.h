#pragma once
#include "CoreMinimal.h"
#include "DialogueStartedEventDelegate.generated.h"

class UCinematicDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueStartedEvent, UCinematicDialogue*, Dialogue, const bool, bWasStateKept);

