#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "DogwoodStatsModMagnitudeCalculation.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSTATS_API UDogwoodStatsModMagnitudeCalculation : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UDogwoodStatsModMagnitudeCalculation();

};

