#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeController_WaitForATick.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestNodeController_WaitForATick : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestNodeController_WaitForATick();

};

