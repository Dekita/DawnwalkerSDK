#pragma once
#include "CoreMinimal.h"
#include "PopulationPointProxy.h"
#include "SpawnPointProxy.generated.h"

UCLASS(Blueprintable)
class POPULATION_API ASpawnPointProxy : public APopulationPointProxy {
    GENERATED_BODY()
public:
    ASpawnPointProxy(const FObjectInitializer& ObjectInitializer);

};

