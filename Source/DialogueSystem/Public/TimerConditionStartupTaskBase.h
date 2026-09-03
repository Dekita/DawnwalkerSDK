#pragma once
#include "CoreMinimal.h"
#include "DialogueStartupTaskBase.h"
#include "TimerConditionStartupTaskBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DIALOGUESYSTEM_API UTimerConditionStartupTaskBase : public UDialogueStartupTaskBase {
    GENERATED_BODY()
public:
    UTimerConditionStartupTaskBase();

};

