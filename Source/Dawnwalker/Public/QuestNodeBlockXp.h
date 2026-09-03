#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "EBlockXpOption.h"
#include "QuestNodeBlockXp.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeBlockXp : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockXpOption Option;
    
public:
    UQuestNodeBlockXp();

};

