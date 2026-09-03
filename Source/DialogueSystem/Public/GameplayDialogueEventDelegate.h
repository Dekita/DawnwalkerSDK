#pragma once
#include "CoreMinimal.h"
#include "GameplayDialogueEventDelegate.generated.h"

class UCinematicDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayDialogueEvent, UCinematicDialogue*, Dialogue);

