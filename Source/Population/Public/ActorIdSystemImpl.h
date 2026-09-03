#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "ActorIdSystemInterface.h"
#include "ActorIdSystemImpl.generated.h"

UCLASS(Blueprintable)
class POPULATION_API UActorIdSystemImpl : public UActorIdSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UActorIdSystemImpl();


    // Fix for true pure virtual functions not being implemented
};

