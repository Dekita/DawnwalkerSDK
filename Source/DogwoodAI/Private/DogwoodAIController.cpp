#include "DogwoodAIController.h"
#include "DogwoodCrowdFollowingComponent.h"

ADogwoodAIController::ADogwoodAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_PathFollowingComponent = GetClass()->FindPropertyByName("PathFollowingComponent");
    (*p_PathFollowingComponent->ContainerPtrToValuePtr<UPathFollowingComponent*>(this)) = NULL;
    this->DogwoodPathFollowingComponent = NULL;
    this->DogwoodCrowdFollowingComponent = CreateDefaultSubobject<UDogwoodCrowdFollowingComponent>(TEXT("Dogwood Crowd Following Component"));
}


