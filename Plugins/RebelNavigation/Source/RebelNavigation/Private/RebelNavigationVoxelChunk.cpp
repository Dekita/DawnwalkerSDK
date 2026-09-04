#include "RebelNavigationVoxelChunk.h"
#include "Components/SceneComponent.h"
#include "RebelNavigationVoxelExportComponent.h"

ARebelNavigationVoxelChunk::ARebelNavigationVoxelChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bHasSourceCoords = false;
    this->VoxelRevision = 1;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->VoxelExportComponent = CreateDefaultSubobject<URebelNavigationVoxelExportComponent>(TEXT("VoxelExportComponent"));
}


