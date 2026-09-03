#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ELootingPanelConditionType.h"
#include "QuestConditionLootingPanelType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionLootingPanelType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELootingPanelConditionType PauseUntil;
    
public:
    UQuestConditionLootingPanelType();

};

