#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PersistentSpawnableData.generated.h"

USTRUCT(BlueprintType)
struct FPersistentSpawnableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> SpawnableGuids;
    
    DIALOGUESYSTEM_API FPersistentSpawnableData();
};

