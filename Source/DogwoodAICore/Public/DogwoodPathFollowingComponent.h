#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "DogwoodPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODAICORE_API UDogwoodPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UDogwoodPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

