#include "InteractableBlueprintPassthrough.h"
#include "Components/SceneComponent.h"
#include "InteractableComponent.h"

AInteractableBlueprintPassthrough::AInteractableBlueprintPassthrough(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->Interactable->SetupAttachment(RootComponent);
}

EInteractionRiskType AInteractableBlueprintPassthrough::GetRiskType_Implementation() {
    return EInteractionRiskType::None;
}

EInteractableState AInteractableBlueprintPassthrough::GetInteractableState_Implementation() {
    return EInteractableState::None;
}

FText AInteractableBlueprintPassthrough::GetInteractablePrompt_Implementation() {
    return FText::GetEmpty();
}


