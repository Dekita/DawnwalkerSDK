#include "Harvestable.h"
#include "Components/StaticMeshComponent.h"
#include "HarvestableComponent.h"

AHarvestable::AHarvestable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->HarvestableComponent = CreateDefaultSubobject<UHarvestableComponent>(TEXT("HarvestableComponent"));
    this->HarvestableComponent->SetupAttachment(RootComponent);
}

void AHarvestable::OnRegenerated_Implementation() {
}

void AHarvestable::OnHarvested_Implementation() {
}


