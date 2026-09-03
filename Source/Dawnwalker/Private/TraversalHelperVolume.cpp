#include "TraversalHelperVolume.h"

ATraversalHelperVolume::ATraversalHelperVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ETraversalHelperType::Wall;
}


