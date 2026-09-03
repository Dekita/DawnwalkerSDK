#include "HighlightableFocusDecal.h"
#include "FocusableComponent.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

AHighlightableFocusDecal::AHighlightableFocusDecal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->RealDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
    this->FocusableComponent = CreateDefaultSubobject<UFocusableComponent>(TEXT("Focusable"));
    this->VerticesPerMeter = 20.00f;
    this->DecalSize = 50.00f;
    this->ProjectionRange = 100.00f;
    this->DistanceFromSurface = 2.00f;
    this->DecalRatio = 1.00f;
    this->ObjectCategory = EFocusableObjectCategory::Default;
    this->bConvertedToRealDecal = false;
    this->FocusableComponent->SetupAttachment(RootComponent);
    this->RealDecal->SetupAttachment(RootComponent);
}

void AHighlightableFocusDecal::SetDecalSize(UDecalComponent* Target, FVector Size) {
}

bool AHighlightableFocusDecal::IsSplineTrail_Implementation() const {
    return false;
}

void AHighlightableFocusDecal::GetMeshMaterials_Implementation(TArray<UMaterialInterface*>& OutMaterials) {
}



