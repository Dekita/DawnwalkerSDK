#pragma once
#include "CoreMinimal.h"
#include "QuestNodeSubSketchPin.h"
#include "QuestNodeSubSketchOutput.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeSubSketchOutput : public UQuestNodeSubSketchPin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTerminatesSketch;
    
public:
    UQuestNodeSubSketchOutput();

};

