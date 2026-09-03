#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BiomesSpawnPointsGrid.generated.h"

UCLASS(Blueprintable)
class ERRANTBIOMESRUNTIME_API UBiomesSpawnPointsGrid : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoCollisionRadius;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellSize;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellEdgeSize;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
public:
    UBiomesSpawnPointsGrid();

};

