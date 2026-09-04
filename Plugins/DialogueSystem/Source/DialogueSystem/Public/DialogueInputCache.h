#pragma once
#include "CoreMinimal.h"
#include "DialogueInputCachedData.h"
#include "DialogueInputCache.generated.h"

USTRUCT(BlueprintType)
struct FDialogueInputCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDialogueInputCachedData> CachedDataByInput;
    
    DIALOGUESYSTEM_API FDialogueInputCache();
};

