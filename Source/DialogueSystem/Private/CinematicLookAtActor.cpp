#include "CinematicLookAtActor.h"
#include "Components/SceneComponent.h"
#include "QuestComponent.h"

ACinematicLookAtActor::ACinematicLookAtActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->StaticMeshComponent = NULL;
    this->Type = ELookAtActorType::Head;
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
}


