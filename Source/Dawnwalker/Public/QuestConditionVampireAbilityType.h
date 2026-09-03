#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EVampireAbilityToCheck.h"
#include "QuestConditionVampireAbilityType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionVampireAbilityType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireAbilityToCheck VampireAbilityToCheck;
    
public:
    UQuestConditionVampireAbilityType();

};

