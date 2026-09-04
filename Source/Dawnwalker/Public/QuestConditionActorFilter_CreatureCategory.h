#pragma once
#include "CoreMinimal.h"
#include "ECreatureCategoryType.h"
#include "QuestConditionActorFilter.h"
#include "QuestConditionActorFilter_CreatureCategory.generated.h"

USTRUCT(BlueprintType)
struct FQuestConditionActorFilter_CreatureCategory : public FQuestConditionActorFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECreatureCategoryType> AcceptedCreatureCategories;
    
    DAWNWALKER_API FQuestConditionActorFilter_CreatureCategory();
};

