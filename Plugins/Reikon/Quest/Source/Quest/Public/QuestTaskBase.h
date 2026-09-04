#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestTaskBase.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestTaskBase : public UObject {
    GENERATED_BODY()
public:
    UQuestTaskBase();

};

