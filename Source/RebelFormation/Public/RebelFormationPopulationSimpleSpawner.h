#pragma once
#include "CoreMinimal.h"
#include "PopulationSimpleSpawner.h"
#include "RebelFormationPopulationSimpleSpawner.generated.h"

UCLASS(Blueprintable)
class REBELFORMATION_API ARebelFormationPopulationSimpleSpawner : public APopulationSimpleSpawner {
    GENERATED_BODY()
public:
    ARebelFormationPopulationSimpleSpawner(const FObjectInitializer& ObjectInitializer);

};

