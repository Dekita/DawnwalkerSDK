#pragma once
#include "CoreMinimal.h"
#include "QuestNodeRuntimeId.generated.h"

USTRUCT(BlueprintType)
struct QUEST_API FQuestNodeRuntimeId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PathHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionId;
    
    FQuestNodeRuntimeId();
};
FORCEINLINE uint32 GetTypeHash(const FQuestNodeRuntimeId) { return 0; }

