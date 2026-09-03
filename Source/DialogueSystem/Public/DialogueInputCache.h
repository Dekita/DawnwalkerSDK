#pragma once
#include "CoreMinimal.h"
#include "DialogueInputCachedData.h"
#include "DialogueInputCache.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDialogueInputCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDialogueInputCachedData> CachedDataByInput;
    
    FDialogueInputCache();
};

