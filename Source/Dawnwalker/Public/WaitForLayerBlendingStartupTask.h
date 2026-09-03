#pragma once
#include "CoreMinimal.h"
#include "TimerConditionStartupTaskBase.h"
#include "WaitForLayerBlendingStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UWaitForLayerBlendingStartupTask : public UTimerConditionStartupTaskBase {
    GENERATED_BODY()
public:
    UWaitForLayerBlendingStartupTask();

};

