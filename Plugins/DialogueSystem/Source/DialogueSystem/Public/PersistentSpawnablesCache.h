#pragma once
#include "CoreMinimal.h"
#include "PersistentSpawnableData.h"
#include "PersistentSpawnablesCache.generated.h"

USTRUCT(BlueprintType)
struct FPersistentSpawnablesCache {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FPersistentSpawnableData> SpawnableDataByPersistentKey;
    
    DIALOGUESYSTEM_API FPersistentSpawnablesCache();
};

