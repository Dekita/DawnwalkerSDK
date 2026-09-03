#include "InspectableObject.h"

AInspectableObject::AInspectableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerSource = EInspectableTriggerSource::World;
}






