#pragma once
#include "CoreMinimal.h"
#include "CinematicResponseLine.h"
#include "LocalizedDialougeLineEventDelegate.generated.h"

class UCinematicDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLocalizedDialougeLineEvent, const UCinematicDialogue*, Dialogue, const FCinematicResponseLine&, ResponseLine, const FText&, LocalizedText);

