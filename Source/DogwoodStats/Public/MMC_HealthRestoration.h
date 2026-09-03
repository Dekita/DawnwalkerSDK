#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_HealthRestoration.generated.h"

UCLASS(Blueprintable)
class DOGWOODSTATS_API UMMC_HealthRestoration : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UMMC_HealthRestoration();

};

