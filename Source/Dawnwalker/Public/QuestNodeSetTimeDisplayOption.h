#pragma once
#include "CoreMinimal.h"
#include "ETimeDisplayOption.h"
#include "QuestNode.h"
#include "QuestNodeSetTimeDisplayOption.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetTimeDisplayOption : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeDisplayOption NewTimeDisplayOption;
    
public:
    UQuestNodeSetTimeDisplayOption();

};

