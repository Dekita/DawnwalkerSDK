#include "CommunityObject.h"

ACommunityObject::ACommunityObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommunitySystem = NULL;
    this->PopulationSystem = NULL;
    this->StubSystem = NULL;
}


