#pragma once
#include "CoreMinimal.h"
#include "TimerConditionStartupTaskBase.h"
#include "CinematicDialogueSettingsStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DIALOGUESYSTEM_API UCinematicDialogueSettingsStartupTask : public UTimerConditionStartupTaskBase {
    GENERATED_BODY()
public:
    UCinematicDialogueSettingsStartupTask();

};

