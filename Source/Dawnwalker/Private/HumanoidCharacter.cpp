#include "HumanoidCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "AppearanceComponent.h"
#include "AudioCharacterFoleyComponent.h"
#include "CharacterLadderUserComponent.h"

AHumanoidCharacter::AHumanoidCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0"))) {
    this->LoadedAppearanceData = NULL;
    this->LadderComponent = CreateDefaultSubobject<UCharacterLadderUserComponent>(TEXT("LadderUser"));
    this->AppearanceComponent = CreateDefaultSubobject<UAppearanceComponent>(TEXT("Appearance"));
    FProperty* p_Mesh_Prior = GetClass()->FindPropertyByName("Mesh");
    this->LeaderMesh = (USkeletalMeshComponent*)*p_Mesh_Prior->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this);
    this->HairMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Hair Mesh"));
    this->EyebrowMeshComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Eyebrows"));
    this->BeardMeshComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Beard"));
    this->HeadMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Face Mesh"));
    this->TorsoMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Torso Mesh"));
    this->HandMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Hand Mesh"));
    this->LegMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Leg Mesh"));
    this->FeetMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Feet Mesh"));
    this->AudioCharacterFoleyComponent = CreateDefaultSubobject<UAudioCharacterFoleyComponent>(TEXT("AudioCharacterFoleyComponent"));
    this->BeardMeshComponent->SetupAttachment(HeadMesh);
    this->EyebrowMeshComponent->SetupAttachment(HeadMesh);
    this->FeetMesh->SetupAttachment(GetMesh());
    this->HairMesh->SetupAttachment(HeadMesh);
    this->HandMesh->SetupAttachment(GetMesh());
    this->HeadMesh->SetupAttachment(GetMesh());
    this->LeaderMesh->SetupAttachment(RootComponent);
    this->LegMesh->SetupAttachment(GetMesh());
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->TorsoMesh->SetupAttachment(GetMesh());
}

void AHumanoidCharacter::UpdateVisAnimTick() {
}

void AHumanoidCharacter::UpdateSkinnedDecalMeshes() {
}

void AHumanoidCharacter::ResetVisAnimTick(FName Category) {
}

void AHumanoidCharacter::RequestVisAnimTick(FName Category, EVisibilityBasedAnimTickOption VisTick) {
}


