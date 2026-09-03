#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionActivePhaseTransition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODQUEST_API UQuestConditionActivePhaseTransition : public UQuestConditionType {
    GENERATED_BODY()
public:
    UQuestConditionActivePhaseTransition();

};

