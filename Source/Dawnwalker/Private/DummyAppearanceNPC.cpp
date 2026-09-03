#include "DummyAppearanceNPC.h"
#include "AppearanceComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ADummyAppearanceNPC::ADummyAppearanceNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Priority = EDialogueActorPriority::Main;
    this->AppearanceComponent = CreateDefaultSubobject<UAppearanceComponent>(TEXT("Appearance Component"));
    this->LeaderMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Leader Mesh"));
    this->HairMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hair Mesh"));
    this->EyebrowMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Eyebrows"));
    this->BeardMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Beard"));
    this->HeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Face Mesh"));
    this->TorsoMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Torso Mesh"));
    this->HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hand Mesh"));
    this->LegMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Leg Mesh"));
    this->FeetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Feet Mesh"));
    this->Appearance = NULL;
    this->BeardMeshComponent->SetupAttachment(HeadMesh);
    this->EyebrowMeshComponent->SetupAttachment(HeadMesh);
    this->FeetMesh->SetupAttachment(LeaderMesh);
    this->HairMesh->SetupAttachment(HeadMesh);
    this->HandMesh->SetupAttachment(LeaderMesh);
    this->HeadMesh->SetupAttachment(LeaderMesh);
    this->LeaderMesh->SetupAttachment(RootComponent);
    this->LegMesh->SetupAttachment(LeaderMesh);
    this->TorsoMesh->SetupAttachment(LeaderMesh);
}

void ADummyAppearanceNPC::UnfreezeClothSimulation() {
}

void ADummyAppearanceNPC::ResetHairSimulation() {
}

void ADummyAppearanceNPC::ResetClothSimulation() {
}

void ADummyAppearanceNPC::ResetClothAndHairSimulation() {
}

void ADummyAppearanceNPC::FreezeClothSimulation() {
}

void ADummyAppearanceNPC::ApplyAppearance(UAppearanceBase* InAppearance) const {
}


