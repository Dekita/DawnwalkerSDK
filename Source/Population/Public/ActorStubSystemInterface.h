#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActorStubSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UActorStubSystemInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UActorStubSystemInterface();

};

