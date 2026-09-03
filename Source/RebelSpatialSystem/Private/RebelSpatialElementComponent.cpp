#include "RebelSpatialElementComponent.h"

URebelSpatialElementComponent::URebelSpatialElementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssetDefinition = NULL;
    this->CustomDefinition = NULL;
    this->DefinitionPtr = NULL;
}


