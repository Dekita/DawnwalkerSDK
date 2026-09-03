#pragma once
#include "CoreMinimal.h"
#include "DogwoodNPCBehaviorComponent.h"
#include "DawnwalkerNPCBehaviorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDawnwalkerNPCBehaviorComponent : public UDogwoodNPCBehaviorComponent {
    GENERATED_BODY()
public:
    UDawnwalkerNPCBehaviorComponent(const FObjectInitializer& ObjectInitializer);

};

