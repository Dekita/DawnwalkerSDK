#include "RebelNavigationVoxelChunkDebugComponent.h"

URebelNavigationVoxelChunkDebugComponent::URebelNavigationVoxelChunkDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->StartCullDistance = 0;
    this->EndCullDistance = 0;
}


