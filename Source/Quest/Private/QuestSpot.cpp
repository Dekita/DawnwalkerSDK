#include "QuestSpot.h"
#include "Components/SceneComponent.h"
#include "QuestComponent.h"

AQuestSpot::AQuestSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRoot"));
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
    this->DummyRoot = (USceneComponent*)RootComponent;
}


