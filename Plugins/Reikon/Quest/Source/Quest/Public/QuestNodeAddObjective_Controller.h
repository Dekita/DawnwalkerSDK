#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController_WaitForATick.h"
#include "QuestNodeAddObjective_Controller.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeAddObjective_Controller : public UQuestNodeController_WaitForATick {
    GENERATED_BODY()
public:
    UQuestNodeAddObjective_Controller();

};

