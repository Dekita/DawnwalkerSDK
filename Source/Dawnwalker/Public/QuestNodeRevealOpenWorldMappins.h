#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeRevealOpenWorldMappins.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeRevealOpenWorldMappins : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RegionTag;
    
public:
    UQuestNodeRevealOpenWorldMappins();

};

