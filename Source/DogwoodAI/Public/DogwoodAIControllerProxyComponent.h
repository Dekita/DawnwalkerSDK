#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DogwoodAIControllerProxyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODAI_API UDogwoodAIControllerProxyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDogwoodAIControllerProxyComponent(const FObjectInitializer& ObjectInitializer);

};

