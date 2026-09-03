#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "Templates/SubclassOf.h"
#include "QuestConditionSpecialChoiceShownType.generated.h"

class USpecialDialogueChoice;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionSpecialChoiceShownType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpecialDialogueChoice> ChoiceType;
    
public:
    UQuestConditionSpecialChoiceShownType();

};

