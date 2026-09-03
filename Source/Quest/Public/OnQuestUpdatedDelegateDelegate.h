#pragma once
#include "CoreMinimal.h"
#include "OnQuestUpdatedDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnQuestUpdatedDelegate, const UQuest*, Quest, bool, bSilent);

