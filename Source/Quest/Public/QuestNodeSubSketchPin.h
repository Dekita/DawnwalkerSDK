#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeSubSketchPin.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestNodeSubSketchPin : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    UQuestNodeSubSketchPin();

};

