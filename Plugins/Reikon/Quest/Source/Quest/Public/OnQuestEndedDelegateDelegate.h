#pragma once
#include "CoreMinimal.h"
#include "OnQuestEndedDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnQuestEndedDelegate, const UQuest*, Quest, bool, bSilent);

