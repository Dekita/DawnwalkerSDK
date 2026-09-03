#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DebugCookQuestNodeCacheRow.generated.h"

USTRUCT(BlueprintType)
struct QUEST_API FDebugCookQuestNodeCacheRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    FDebugCookQuestNodeCacheRow();
};

