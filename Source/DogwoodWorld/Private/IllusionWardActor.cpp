#include "IllusionWardActor.h"
#include "Components/StaticMeshComponent.h"

AIllusionWardActor::AIllusionWardActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
    this->ActiveWardParticleComponent = NULL;
    this->StaticMesh->SetupAttachment(RootComponent);
}


