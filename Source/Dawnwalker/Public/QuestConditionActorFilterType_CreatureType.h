#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "QuestConditionActorFilterType.h"
#include "QuestConditionActorFilterType_CreatureType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UQuestConditionActorFilterType_CreatureType : public UQuestConditionActorFilterType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer AcceptedCreatureTypes;
    
public:
    UQuestConditionActorFilterType_CreatureType();

};

