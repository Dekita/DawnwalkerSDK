#pragma once
#include "CoreMinimal.h"
#include "WayPoint.h"
#include "DespawnPoint.generated.h"

UCLASS(Blueprintable)
class POPULATION_API ADespawnPoint : public AWayPoint {
    GENERATED_BODY()
public:
    ADespawnPoint(const FObjectInitializer& ObjectInitializer);

};

