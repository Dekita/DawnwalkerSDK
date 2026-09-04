#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController_WaitForATick.h"
#include "QuestNodeFinishObjective_Controller.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeFinishObjective_Controller : public UQuestNodeController_WaitForATick {
    GENERATED_BODY()
public:
    UQuestNodeFinishObjective_Controller();

};

