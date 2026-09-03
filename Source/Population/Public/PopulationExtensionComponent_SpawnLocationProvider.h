#pragma once
#include "CoreMinimal.h"
#include "PopulationExtensionComponent.h"
#include "PopulationExtensionComponent_SpawnLocationProvider.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UPopulationExtensionComponent_SpawnLocationProvider : public UPopulationExtensionComponent {
    GENERATED_BODY()
public:
    UPopulationExtensionComponent_SpawnLocationProvider();

};

