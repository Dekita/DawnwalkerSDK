#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "RebelNavigationLayerRegistryEntry.h"
#include "RebelNavigationVoxelGrid.generated.h"

class ARebelNavigationVoxelChunk;
class UDataLayerInstance;

UCLASS(Blueprintable)
class REBELNAVIGATION_API ARebelNavigationVoxelGrid : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChunkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExportScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNavigationDataExport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelNavigationLayerRegistryEntry> LayerRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, ARebelNavigationVoxelChunk*> ChunkMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ARebelNavigationVoxelChunk*> PendingChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, bool> RuntimeLayerStateOverrides;
    
public:
    ARebelNavigationVoxelGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetLayerEnabledAtRuntime(const FGuid& LayerId, bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDataLayerInstanceRuntimeStateChanged(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    
};

