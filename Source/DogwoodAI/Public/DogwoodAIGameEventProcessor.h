#pragma once
#include "CoreMinimal.h"
#include "RebelAIGameEventProcessor.h"
#include "DogwoodAIGameEventProcessor.generated.h"

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodAIGameEventProcessor : public URebelAIGameEventProcessor {
    GENERATED_BODY()
public:
    UDogwoodAIGameEventProcessor();

};

