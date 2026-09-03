#include "Door.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NavLinkComponent.h"
#include "PersistencyComponent.h"
#include "QuestComponent.h"
#include "InteractableComponent.h"

ADoor::ADoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DoorState = EDoorState::Open;
    this->bForceDoorWideOpen = false;
    this->DoorOpenDirection = EDoorOpenDirection::Forward;
    this->DoorCrackAmount = 0.00f;
    this->UnlockItem = NULL;
    this->DoorOrientation = EDoorOrientation::Left;
    this->InteractableOffset = 50.00f;
    this->DoorOpenAngle = 100.00f;
    this->MeshRotationOffset = 0.00f;
    this->OpenCurve = NULL;
    this->CloseCurve = NULL;
    this->DoorMovementProfile = NULL;
    this->Origin = CreateDefaultSubobject<USceneComponent>(TEXT("Origin"));
    this->NavLink = CreateDefaultSubobject<UNavLinkComponent>(TEXT("NavLink"));
    this->PersistencyComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->ApproachTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ApproachTrigger"));
    this->OpenTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("OpenVolume"));
    this->DoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
    this->LockedObstacle = CreateDefaultSubobject<UBoxComponent>(TEXT("LockedObstacle"));
    this->TraversalAreaTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TraversalAreaTrigger"));
    this->InvisibleWallForCombat = CreateDefaultSubobject<UBoxComponent>(TEXT("InvisibleWallForCombat"));
    this->DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->FrontInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("FrontInteraction"));
    this->RearInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("RearInteraction"));
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("Quest"));
    this->ApproachTrigger->SetupAttachment(RootComponent);
    this->DoorMesh->SetupAttachment(RootComponent);
    this->DoorTrigger->SetupAttachment(DoorMesh);
    this->FrontInteractable->SetupAttachment(RootComponent);
    this->InvisibleWallForCombat->SetupAttachment(RootComponent);
    this->LockedObstacle->SetupAttachment(RootComponent);
    this->NavLink->SetupAttachment(RootComponent);
    this->OpenTrigger->SetupAttachment(RootComponent);
    this->Origin->SetupAttachment(RootComponent);
    this->PersistencyComponent->SetupAttachment(RootComponent);
    this->RearInteractable->SetupAttachment(RootComponent);
    this->TraversalAreaTrigger->SetupAttachment(RootComponent);
}

bool ADoor::TryUnlock(AController* UnlockingController) {
    return false;
}

void ADoor::SetDoorUnlockingItem(UItemBaseDataAsset* NewUnlockItem) {
}

void ADoor::SetDoorState(EDoorState InNewState) {
}

void ADoor::SetDoorForcedOpen(bool bInForcedOpen, EDoorOpenDirection InOpenDirection, bool bFromSave) {
}

void ADoor::SetDoorCrackAmount(float InAmount) {
}

void ADoor::Open(AActor* OpeningActor) {
}

void ADoor::OnTriggerOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADoor::OnTriggerOverlapEnded(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADoor::OnTraversalAreaEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADoor::OnTraversalAreaBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADoor::OnRearInteractionStarted_Implementation() {
}

void ADoor::OnFrontInteractionStarted_Implementation() {
}





void ADoor::OnCombatStarted() {
}

void ADoor::OnCombatEnded() {
}

void ADoor::OnCinematicStarted(UCinematicDialogue* Dialogue, const bool bWasStateKept) {
}

void ADoor::OnApproachTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADoor::OnApproachTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADoor::NotifyDoorStateChanged_Implementation(EDoorState PreviousState, EDoorState NewState) {
}

bool ADoor::IsDoorUnlocked() const {
    return false;
}

bool ADoor::IsDoorStateOpen(EDoorState InState) {
    return false;
}

EDoorState ADoor::GetDoorState() const {
    return EDoorState::Open;
}

void ADoor::CloseInstantly() {
}

void ADoor::Close(bool WasSystemicallyClosed) {
}

bool ADoor::CanBeUnlockedBy(AController* UnlockingController) {
    return false;
}


