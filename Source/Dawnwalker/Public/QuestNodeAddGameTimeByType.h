#pragma once
#include "CoreMinimal.h"
#include "EQuestTimeProgressionType.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeAddGameTimeByType.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAddGameTimeByType : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestTimeProgressionType QuestTimeProgressionType;
    
public:
    UQuestNodeAddGameTimeByType();

};

