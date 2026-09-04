#pragma once
#include "CoreMinimal.h"
#include "OnQuestAddedMulticastDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestAddedMulticastDelegate, const UQuest*, Quest, bool, bSilent);

