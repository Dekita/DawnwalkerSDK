#pragma once
#include "CoreMinimal.h"
#include "SpawnedPopulationActorDelegateDelegate.generated.h"

class APawn;
class APopulationSimpleSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnedPopulationActorDelegate, APopulationSimpleSpawner*, Spawner, APawn*, Pawn);

