#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "FactRequest.h"
#include "EConditionCheckType.h"
#include "QuestConditionCompareFactsIntType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionCompareFactsIntType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactRequest Fact1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactRequest Fact2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
public:
    UQuestConditionCompareFactsIntType();

};

