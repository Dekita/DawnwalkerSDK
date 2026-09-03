#include "HumanoidNPCBase.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "DogwoodAIControllerProxyComponent.h"
#include "InteractableComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AudioNPCCombatComponent.h"
#include "DawnwalkerNPCCombatComponent.h"

AHumanoidNPCBase::AHumanoidNPCBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->CombatComponent = CreateDefaultSubobject<UDawnwalkerNPCCombatComponent>(TEXT("Combat Component"));
    this->AudioNPCCombatComponent = CreateDefaultSubobject<UAudioNPCCombatComponent>(TEXT("AudioNPCCombatComponent"));
    this->AIControllerProxyComponent = CreateDefaultSubobject<UDogwoodAIControllerProxyComponent>(TEXT("AI Controller Proxy Component"));
    this->SheathedWeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sheathed Weapon"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->ScabbardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scabbard"));
    this->SheathedWeaponSocketName = TEXT("prop_hand_hips_01_l");
    this->ScabbardSocketName = TEXT("prop_hand_hips_01_l");
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->ScabbardMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
    this->SheathedWeaponMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
}


void AHumanoidNPCBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHumanoidNPCBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHumanoidNPCBase::OnNavRebuilt(ANavigationData* NavData) {
}

void AHumanoidNPCBase::OnInteractionStarted() {
}

FText AHumanoidNPCBase::GetInteractionPrompt_Implementation() const {
    return FText::GetEmpty();
}

FVector AHumanoidNPCBase::GetInteractionLocation_Implementation() const {
    return FVector{};
}


