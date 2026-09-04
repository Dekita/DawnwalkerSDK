#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestActorRequest.generated.h"

USTRUCT(BlueprintType)
struct QUEST_API FQuestActorRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FQuestActorRequest();
};

