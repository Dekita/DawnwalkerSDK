#pragma once
#include "CoreMinimal.h"
#include "EQuestTimeProgressionType.h"
#include "QuestNode.h"
#include "QuestNodeShowTriggerNotice.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeShowTriggerNotice : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestTimeProgressionType TimeProgressionType;
    
    UQuestNodeShowTriggerNotice();

};

