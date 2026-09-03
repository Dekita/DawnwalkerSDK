#pragma once
#include "CoreMinimal.h"
#include "OnQuestUpdatedMulticastDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestUpdatedMulticastDelegate, const UQuest*, Quest, bool, bSilent);

