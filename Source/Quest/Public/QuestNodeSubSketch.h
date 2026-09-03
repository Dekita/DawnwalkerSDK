#pragma once
#include "CoreMinimal.h"
#include "GraphContainerNodeInterface.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeSubSketch.generated.h"

class UQuestSketchType;

UCLASS(Blueprintable)
class QUEST_API UQuestNodeSubSketch : public UQuestNodeWaitingBase, public IGraphContainerNodeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestSketchType* SketchType;
    
public:
    UQuestNodeSubSketch();


    // Fix for true pure virtual functions not being implemented
};

