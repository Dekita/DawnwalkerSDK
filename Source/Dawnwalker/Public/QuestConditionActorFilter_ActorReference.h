#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestConditionActorFilter.h"
#include "QuestConditionActorFilter_ActorReference.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FQuestConditionActorFilter_ActorReference : public FQuestConditionActorFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorReference;
    
    FQuestConditionActorFilter_ActorReference();
};

