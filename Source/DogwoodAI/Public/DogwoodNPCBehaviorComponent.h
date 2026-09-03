#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DogwoodNPCBehaviorComponent.generated.h"

class UDogwoodNPCBehavior;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODAI_API UDogwoodNPCBehaviorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDogwoodNPCBehavior* CurrentBehavior;
    
public:
    UDogwoodNPCBehaviorComponent(const FObjectInitializer& ObjectInitializer);

};

