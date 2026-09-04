#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController_WaitForATick.h"
#include "QuestNodeReactivateObjective_Controller.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeReactivateObjective_Controller : public UQuestNodeController_WaitForATick {
    GENERATED_BODY()
public:
    UQuestNodeReactivateObjective_Controller();

};

