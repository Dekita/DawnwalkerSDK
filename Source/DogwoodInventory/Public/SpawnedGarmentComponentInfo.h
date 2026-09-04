#pragma once
#include "CoreMinimal.h"
#include "SpawnedGarmentComponentInfo.generated.h"

class USkinnedMeshComponent;

USTRUCT(BlueprintType)
struct FSpawnedGarmentComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SpawnedMeshComponent;
    
    DOGWOODINVENTORY_API FSpawnedGarmentComponentInfo();
};

