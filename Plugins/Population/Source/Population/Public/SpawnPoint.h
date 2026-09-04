#pragma once
#include "CoreMinimal.h"
#include "CommunityBasePoint.h"
#include "CommunityObjectUsableInterface.h"
#include "SpawnPoint.generated.h"

UCLASS(Blueprintable)
class POPULATION_API ASpawnPoint : public ACommunityBasePoint, public ICommunityObjectUsableInterface {
    GENERATED_BODY()
public:
    ASpawnPoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

