#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController_WaitForATick.h"
#include "QuestNodeUpdateObjective_Controller.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeUpdateObjective_Controller : public UQuestNodeController_WaitForATick {
    GENERATED_BODY()
public:
    UQuestNodeUpdateObjective_Controller();

};

