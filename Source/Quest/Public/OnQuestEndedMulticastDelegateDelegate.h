#pragma once
#include "CoreMinimal.h"
#include "OnQuestEndedMulticastDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestEndedMulticastDelegate, const UQuest*, Quest, bool, bSilent);

