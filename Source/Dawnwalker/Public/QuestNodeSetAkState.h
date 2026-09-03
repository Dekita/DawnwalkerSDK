#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "SetStateData.h"
#include "QuestNodeSetAkState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetAkState : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetStateData> StateData;
    
    UQuestNodeSetAkState();

};

