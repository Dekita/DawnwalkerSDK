#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "DogwoodCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODAICORE_API UDogwoodCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UDogwoodCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

