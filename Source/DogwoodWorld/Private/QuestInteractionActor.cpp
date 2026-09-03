#include "QuestInteractionActor.h"
#include "QuestComponent.h"
#include "InteractableComponent.h"

AQuestInteractionActor::AQuestInteractionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->InteractableComponent = (UInteractableComponent*)RootComponent;
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("Quest"));
    this->bHighlightAttachedToTarget = false;
    this->bHasCustomInteractionPrompt = false;
}

void AQuestInteractionActor::OnTargetHighlightEndPlay(AActor* InActor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}


