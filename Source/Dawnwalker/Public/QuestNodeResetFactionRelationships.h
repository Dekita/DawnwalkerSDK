#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeResetFactionRelationships.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeResetFactionRelationships : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
public:
    UQuestNodeResetFactionRelationships();

};

