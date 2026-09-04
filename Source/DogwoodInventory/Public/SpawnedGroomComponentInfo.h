#pragma once
#include "CoreMinimal.h"
#include "SpawnedGroomComponentInfo.generated.h"

class UGroomComponent;

USTRUCT(BlueprintType)
struct FSpawnedGroomComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomComponent* SpawnedGroom;
    
    DOGWOODINVENTORY_API FSpawnedGroomComponentInfo();
};

