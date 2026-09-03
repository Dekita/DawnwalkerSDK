#include "QuestSplinePath.h"
#include "Components/SplineComponent.h"
#include "QuestComponent.h"

AQuestSplinePath::AQuestSplinePath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("Quest"));
}

USplineComponent* AQuestSplinePath::GetSplineComponent() const {
    return NULL;
}


