#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ELoadingConditionType.h"
#include "QuestConditionLoadingType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionLoadingType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadingConditionType PauseUntil;
    
public:
    UQuestConditionLoadingType();

};

