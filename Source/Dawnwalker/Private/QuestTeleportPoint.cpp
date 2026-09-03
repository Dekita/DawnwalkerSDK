#include "QuestTeleportPoint.h"
#include "Components/SceneComponent.h"
#include "QuestComponent.h"

AQuestTeleportPoint::AQuestTeleportPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRoot"));
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
    this->DummyRoot = (USceneComponent*)RootComponent;
}


