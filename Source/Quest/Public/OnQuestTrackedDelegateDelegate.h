#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnQuestTrackedDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnQuestTrackedDelegate, const UQuest*, Quest, const FGuid&, Objective, bool, bSilent);

