#pragma once
#include "CoreMinimal.h"
#include "QuestNodeRuntimeId.generated.h"

USTRUCT(BlueprintType)
struct FQuestNodeRuntimeId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PathHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionId;
    
    QUEST_API FQuestNodeRuntimeId();
};
FORCEINLINE uint32 GetTypeHash(const FQuestNodeRuntimeId) { return 0; }

