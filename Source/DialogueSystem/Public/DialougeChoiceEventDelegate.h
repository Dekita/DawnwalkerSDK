#pragma once
#include "CoreMinimal.h"
#include "DialougeChoiceEventDelegate.generated.h"

class UCinematicNode_Choice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialougeChoiceEvent, UCinematicNode_Choice*, ChoiceNode);

