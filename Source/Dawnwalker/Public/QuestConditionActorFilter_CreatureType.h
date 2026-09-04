#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "QuestConditionActorFilter.h"
#include "QuestConditionActorFilter_CreatureType.generated.h"

USTRUCT(BlueprintType)
struct FQuestConditionActorFilter_CreatureType : public FQuestConditionActorFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer AcceptedCreatureTypes;
    
    DAWNWALKER_API FQuestConditionActorFilter_CreatureType();
};

