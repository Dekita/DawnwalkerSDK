#pragma once
#include "CoreMinimal.h"
#include "EDWDifficultyLevel.h"
#include "QuestNode.h"
#include "QuestNodeDebugSetDifficulty.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeDebugSetDifficulty : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDWDifficultyLevel DifficultyLevel;
    
public:
    UQuestNodeDebugSetDifficulty();

};

