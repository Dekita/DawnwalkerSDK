#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "OnQuestObjectiveUpdatedDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnQuestObjectiveUpdatedDelegate, const UQuest*, Quest, const FObjective&, Objective, bool, bSilent);

