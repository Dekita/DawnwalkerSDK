#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeEnableTimeSkip.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeEnableTimeSkip : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTimeSkip;
    
public:
    UQuestNodeEnableTimeSkip();

};

