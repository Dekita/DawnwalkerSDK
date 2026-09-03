#include "MetaHumanTemplateMeshComponent.h"
#include "UDynamicMesh.h"
#include "Components/DynamicMeshComponent.h"

UMetaHumanTemplateMeshComponent::UMetaHumanTemplateMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowFittedTeeth = true;
    this->bShowEyes = true;
    this->bShowTeethMesh = true;
    this->HeadMeshComponent = CreateDefaultSubobject<UDynamicMeshComponent>(TEXT("Template Head Mesh Component"));
    this->TeethMeshComponent = CreateDefaultSubobject<UDynamicMeshComponent>(TEXT("Template Teeth Mesh Component"));
    this->LeftEyeComponent = CreateDefaultSubobject<UDynamicMeshComponent>(TEXT("Template Left Eye Mesh Component"));
    this->RightEyeComponent = CreateDefaultSubobject<UDynamicMeshComponent>(TEXT("Template Left Right Mesh Component"));
    this->OriginalTeethMesh = CreateDefaultSubobject<UDynamicMesh>(TEXT("Original Teeth Mesh"));
    this->FittedTeethMesh = CreateDefaultSubobject<UDynamicMesh>(TEXT("Fitted Teeth Mesh"));
}


