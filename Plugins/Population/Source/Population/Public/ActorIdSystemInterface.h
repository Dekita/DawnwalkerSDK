#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActorIdSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UActorIdSystemInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UActorIdSystemInterface();

};

