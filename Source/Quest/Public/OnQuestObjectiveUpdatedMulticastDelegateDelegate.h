#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "OnQuestObjectiveUpdatedMulticastDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnQuestObjectiveUpdatedMulticastDelegate, const UQuest*, Quest, const FObjective&, Objective, bool, bSilent);

