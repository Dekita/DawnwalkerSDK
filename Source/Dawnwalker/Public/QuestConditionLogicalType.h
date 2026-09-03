#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ELogicalOperationType.h"
#include "QuestConditionLogicalType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionLogicalType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELogicalOperationType Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestConditionType*> Conditions;
    
public:
    UQuestConditionLogicalType();

};

