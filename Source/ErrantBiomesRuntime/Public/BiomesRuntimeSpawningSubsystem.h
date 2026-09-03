#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BiomesRuntimeSpawningSubsystem.generated.h"

UCLASS(Blueprintable)
class ERRANTBIOMESRUNTIME_API UBiomesRuntimeSpawningSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBiomesRuntimeSpawningSubsystem();

};

