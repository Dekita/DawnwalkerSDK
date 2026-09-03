#pragma once
#include "CoreMinimal.h"
#include "EQuestTimeProgressionType.h"
#include "OnTriggerNoticeStateUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTriggerNoticeStateUpdated, bool, bActive, EQuestTimeProgressionType, TimeProgressionType, bool, bManual);

