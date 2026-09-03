#pragma once
#include "CoreMinimal.h"
#include "PopulationSimpleSpawner.h"
#include "DogwoodPopulationSimpleSpawner.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API ADogwoodPopulationSimpleSpawner : public APopulationSimpleSpawner {
    GENERATED_BODY()
public:
    ADogwoodPopulationSimpleSpawner(const FObjectInitializer& ObjectInitializer);

};

