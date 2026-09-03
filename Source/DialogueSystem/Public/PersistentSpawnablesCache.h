#pragma once
#include "CoreMinimal.h"
#include "PersistentSpawnableData.h"
#include "PersistentSpawnablesCache.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FPersistentSpawnablesCache {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FPersistentSpawnableData> SpawnableDataByPersistentKey;
    
    FPersistentSpawnablesCache();
};

