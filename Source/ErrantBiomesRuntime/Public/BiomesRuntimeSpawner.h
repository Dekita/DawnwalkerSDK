#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BiomesRuntimeSpawner.generated.h"

class UBiomesSpeciesInfo;
class UHierarchicalInstancedStaticMeshComponent;
class ULandscapeComponent;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ERRANTBIOMESRUNTIME_API ADEPRECATED_BiomesRuntimeSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBiomesSpeciesInfo> SpeciesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPointsGridIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ComponentXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULandscapeComponent> LandscapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHierarchicalInstancedStaticMeshComponent*> InstancedStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawningDistance;
    
    ADEPRECATED_BiomesRuntimeSpawner(const FObjectInitializer& ObjectInitializer);

};

