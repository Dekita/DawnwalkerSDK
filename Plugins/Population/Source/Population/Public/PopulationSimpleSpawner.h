#pragma once
#include "CoreMinimal.h"
#include "CommunityObject.h"
#include "PopulationSimpleSpawner.generated.h"

class ADynamicSpawnPoint;
class APawn;
class UCommunity_PopulationArea;
class UDataTable;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class POPULATION_API APopulationSimpleSpawner : public ACommunityObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* GeneratedDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommunity_PopulationArea* SpawnActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommunity_PopulationArea* DespawnActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADynamicSpawnPoint*> DynamicSpawnPoints;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, TWeakObjectPtr<APawn>> SpawnedPawns;
    
public:
    APopulationSimpleSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
};

