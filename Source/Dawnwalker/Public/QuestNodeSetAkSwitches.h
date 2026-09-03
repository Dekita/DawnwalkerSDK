#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "SetSwitchData.h"
#include "QuestNodeSetAkSwitches.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetAkSwitches : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetSwitchData> SwitchData;
    
    UQuestNodeSetAkSwitches();

};

