#include "RebelRoadsNavDataChunk.h"
#include "Components/SceneComponent.h"

ARebelRoadsNavDataChunk::ARebelRoadsNavDataChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SourceGraphId = 0;
    this->BuildHash = 0;
    this->bHasBuildMetadata = false;
    this->SourceChunkSize = 0.00f;
}

void ARebelRoadsNavDataChunk::DrawDebug() {
}


