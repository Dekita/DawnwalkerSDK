#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BiomesPartitionActor.h"
#include "BiomesRuntimeSpawnerContainer.generated.h"

class UBiomesRuntimeSpawnerComponent;

UCLASS(Blueprintable)
class ERRANTBIOMESRUNTIME_API ABiomesRuntimeSpawnerContainer : public ABiomesPartitionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBiomesRuntimeSpawnerComponent*> SpawnerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox FullySpawnedWorldBounds;
    
    ABiomesRuntimeSpawnerContainer(const FObjectInitializer& ObjectInitializer);

};

