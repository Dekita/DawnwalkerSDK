#pragma once
#include "CoreMinimal.h"
#include "EnhancedPlayerInput.h"
#include "DogwoodPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class DOGWOODSYSTEM_API UDogwoodPlayerInput : public UEnhancedPlayerInput {
    GENERATED_BODY()
public:
    UDogwoodPlayerInput();

};

