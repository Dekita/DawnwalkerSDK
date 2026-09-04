#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeRandomPath.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeRandomPath : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawWithRepetition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortAscendingDrawedOutputs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DrawsNumber;
    
public:
    UQuestNodeRandomPath();

};

