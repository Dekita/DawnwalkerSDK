#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestActorKey.generated.h"

USTRUCT(BlueprintType)
struct QUEST_API FQuestActorKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuestComponentTag;
    
public:
    FQuestActorKey();
};
FORCEINLINE uint32 GetTypeHash(const FQuestActorKey) { return 0; }

