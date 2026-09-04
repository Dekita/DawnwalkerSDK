#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PopulationExtensionComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UPopulationExtensionComponent : public UObject {
    GENERATED_BODY()
public:
    UPopulationExtensionComponent();

};

