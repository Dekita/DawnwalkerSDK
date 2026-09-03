#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperator.h"
#include "QuestConditionDaysPassedBaseType.h"
#include "QuestConditionDaysPassedType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionDaysPassedType : public UQuestConditionDaysPassedBaseType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Day;
    
public:
    UQuestConditionDaysPassedType();

};

