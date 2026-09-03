#pragma once
#include "CoreMinimal.h"
#include "NodeBase.h"
#include "QuestNode.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestNode : public UNodeBase {
    GENERATED_BODY()
public:
    UQuestNode();

};

