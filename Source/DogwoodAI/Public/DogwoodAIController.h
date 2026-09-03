#pragma once
#include "CoreMinimal.h"
#include "CommunityController.h"
#include "DogwoodAIController.generated.h"

class UDogwoodCrowdFollowingComponent;
class UDogwoodPathFollowingComponent;

UCLASS(Abstract, Blueprintable)
class DOGWOODAI_API ADogwoodAIController : public ACommunityController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDogwoodPathFollowingComponent* DogwoodPathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDogwoodCrowdFollowingComponent* DogwoodCrowdFollowingComponent;
    
public:
    ADogwoodAIController(const FObjectInitializer& ObjectInitializer);

};

