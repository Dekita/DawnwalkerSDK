#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "SetRTPCValueData.h"
#include "QuestNodeSetAkRTPCValues.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetAkRTPCValues : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetRTPCValueData> RTCPValueData;
    
    UQuestNodeSetAkRTPCValues();

};

