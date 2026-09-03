#include "BiomesHierarchicalInstancedStaticMeshComponent.h"

UBiomesHierarchicalInstancedStaticMeshComponent::UBiomesHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultInstanceStartCullDistance = 0;
    this->DefaultInstanceEndCullDistance = 0;
    this->ShadowQuality = ERebelQuality::Low;
    this->MetadataType_Bridge = ERebelFoliageMetadataTypeErrantBridge::None;
}


