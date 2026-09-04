#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnQuestTrackedMulticastDelegateDelegate.generated.h"

class UQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnQuestTrackedMulticastDelegate, const UQuest*, Quest, const FGuid&, ObjectiveGuid, bool, bSilent);

