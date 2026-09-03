#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestConditionActorFilterType.h"
#include "QuestConditionActorFilterType_ActorReference.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionActorFilterType_ActorReference : public UQuestConditionActorFilterType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorReference;
    
public:
    UQuestConditionActorFilterType_ActorReference();

};

