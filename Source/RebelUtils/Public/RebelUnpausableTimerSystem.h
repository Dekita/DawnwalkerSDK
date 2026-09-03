#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RebelUnpausableTimerSystem.generated.h"

UCLASS(Blueprintable)
class REBELUTILS_API URebelUnpausableTimerSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URebelUnpausableTimerSystem();

};

