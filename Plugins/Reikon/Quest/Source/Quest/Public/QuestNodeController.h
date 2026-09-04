#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestNodeController.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestNodeController : public UObject {
    GENERATED_BODY()
public:
    UQuestNodeController();

};

