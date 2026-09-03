#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ECraftingConditionType.h"
#include "QuestConditionCraftingType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionCraftingType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECraftingConditionType PauseType;
    
public:
    UQuestConditionCraftingType();

};

