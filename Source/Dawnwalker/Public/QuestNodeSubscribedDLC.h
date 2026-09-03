#pragma once
#include "CoreMinimal.h"
#include "EDogwoodDLCType.h"
#include "QuestNode.h"
#include "QuestNodeSubscribedDLC.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSubscribedDLC : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDogwoodDLCType DLCTitleID;
    
    UQuestNodeSubscribedDLC();

};

