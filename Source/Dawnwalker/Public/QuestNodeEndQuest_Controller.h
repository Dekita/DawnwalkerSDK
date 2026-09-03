#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController_WaitForATick.h"
#include "QuestNodeEndQuest_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeEndQuest_Controller : public UQuestNodeController_WaitForATick {
    GENERATED_BODY()
public:
    UQuestNodeEndQuest_Controller();

};

