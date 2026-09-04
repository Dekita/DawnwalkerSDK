#include "SpawnPoint.h"
#include "Components/SceneComponent.h"

ASpawnPoint::ASpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
}


