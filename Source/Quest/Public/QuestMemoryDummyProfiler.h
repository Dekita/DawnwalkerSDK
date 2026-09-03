#pragma once
#include "CoreMinimal.h"
#include "QuestMemoryBaseProfiler.h"
#include "QuestMemoryDummyProfiler.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestMemoryDummyProfiler : public UQuestMemoryBaseProfiler {
    GENERATED_BODY()
public:
    UQuestMemoryDummyProfiler();

};

