#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PopulationPointProxy.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class POPULATION_API APopulationPointProxy : public AActor {
    GENERATED_BODY()
public:
    APopulationPointProxy(const FObjectInitializer& ObjectInitializer);

};

