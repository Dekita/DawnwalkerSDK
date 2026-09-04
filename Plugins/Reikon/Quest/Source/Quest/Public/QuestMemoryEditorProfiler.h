#pragma once
#include "CoreMinimal.h"
#include "QuestMemoryBaseProfiler.h"
#include "Templates/SubclassOf.h"
#include "QuestMemoryEditorProfiler.generated.h"

class UQuestSketch;

UCLASS(Blueprintable)
class QUEST_API UQuestMemoryEditorProfiler : public UQuestMemoryBaseProfiler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UQuestSketch>> StartedQuestSketches;
    
public:
    UQuestMemoryEditorProfiler();

};

