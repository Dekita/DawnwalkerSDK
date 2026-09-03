#include "InventoryRenderDoll.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AppearanceComponent.h"

AInventoryRenderDoll::AInventoryRenderDoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TargetInventory = NULL;
    this->AppearanceToApply = NULL;
    this->SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Scene Capture"));
    this->AppearanceComponent = CreateDefaultSubobject<UAppearanceComponent>(TEXT("AppearanceComponent"));
    this->LeaderMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Leader"));
    this->HeadMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->HairMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hair"));
    this->EyebrowMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Eyebrows"));
    this->BeardMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Beard"));
    this->TorsoMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Torso"));
    this->HandMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hand"));
    this->LegMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Leg"));
    this->FeetMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Feet"));
    this->WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh"));
    this->ScabbardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scabbard Mesh"));
    this->AllMeshes.AddDefaulted(11);
    this->ShownWeaponItem = NULL;
    this->ShownWeapon = NULL;
    this->ShownScabbard = NULL;
    this->BeardMeshComponent->SetupAttachment(HeadMeshComponent);
    this->EyebrowMeshComponent->SetupAttachment(HeadMeshComponent);
    this->FeetMeshComponent->SetupAttachment(LeaderMeshComponent);
    this->HairMeshComponent->SetupAttachment(HeadMeshComponent);
    this->HandMeshComponent->SetupAttachment(LeaderMeshComponent);
    this->HeadMeshComponent->SetupAttachment(LeaderMeshComponent);
    this->LeaderMeshComponent->SetupAttachment(RootComponent);
    this->LegMeshComponent->SetupAttachment(LeaderMeshComponent);
    this->ScabbardMesh->SetupAttachment(LeaderMeshComponent);
    this->SceneCapture->SetupAttachment(RootComponent);
    this->TorsoMeshComponent->SetupAttachment(LeaderMeshComponent);
    this->WeaponMesh->SetupAttachment(LeaderMeshComponent);
}

void AInventoryRenderDoll::OnWeaponMeshLoaded_Implementation(UStaticMesh* InWeaponMesh) {
}

void AInventoryRenderDoll::OnScabbardMeshLoaded_Implementation(UStaticMesh* InScabbardMesh) {
}

UAppearanceComponent* AInventoryRenderDoll::GetAppearanceComponent() const {
    return NULL;
}


