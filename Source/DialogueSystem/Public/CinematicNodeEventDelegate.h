#pragma once
#include "CoreMinimal.h"
#include "CinematicNodeEventDelegate.generated.h"

class UCinematicNode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicNodeEvent, UCinematicNode*, Node);

