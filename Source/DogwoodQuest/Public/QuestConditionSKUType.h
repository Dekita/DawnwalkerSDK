#pragma once
#include "CoreMinimal.h"
#include "ERebelSKURegion.h"
#include "EQuestSimpleComparisonType.h"
#include "QuestConditionType.h"
#include "QuestConditionSKUType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODQUEST_API UQuestConditionSKUType : public UQuestConditionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestSimpleComparisonType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelSKURegion CompareToRegion;
    
    UQuestConditionSKUType();

};

