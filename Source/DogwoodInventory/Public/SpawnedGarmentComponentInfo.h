#pragma once
#include "CoreMinimal.h"
#include "SpawnedGarmentComponentInfo.generated.h"

class USkinnedMeshComponent;

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FSpawnedGarmentComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SpawnedMeshComponent;
    
    FSpawnedGarmentComponentInfo();
};

