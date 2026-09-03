#include "SqueezableGap.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASqueezableGap::ASqueezableGap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->StartComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("StartCollisionComp"));
    this->EndComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EndCollisionComp"));
    this->EndComponent->SetupAttachment(RootComponent);
    this->StartComponent->SetupAttachment(RootComponent);
}


