#pragma once
#include "CoreMinimal.h"
#include "ECreatureCategoryType.h"
#include "QuestConditionActorFilterType.h"
#include "QuestConditionActorFilterType_CreatureCategory.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UQuestConditionActorFilterType_CreatureCategory : public UQuestConditionActorFilterType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECreatureCategoryType> AcceptedCreatureCategories;
    
public:
    UQuestConditionActorFilterType_CreatureCategory();

};

