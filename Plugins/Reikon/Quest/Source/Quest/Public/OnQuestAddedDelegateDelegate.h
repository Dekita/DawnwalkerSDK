#pragma once
#include "CoreMinimal.h"
#include "OnQuestAddedDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnQuestAddedDelegate, const UQuest*, Quest, bool, bSilent);

