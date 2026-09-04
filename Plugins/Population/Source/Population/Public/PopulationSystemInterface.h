#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PopulationStats.h"
#include "PopulationSystemInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UPopulationSystemInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPopulationSystemInterface();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStats(FPopulationStats& Stats) const;
    
};

