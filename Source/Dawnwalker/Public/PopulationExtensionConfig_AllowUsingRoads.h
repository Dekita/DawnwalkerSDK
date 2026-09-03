#pragma once
#include "CoreMinimal.h"
#include "EPopulationSpawnDistributionScope.h"
#include "PopulationExtensionConfig.h"
#include "ERebelRoadsUseMode.h"
#include "PopulationExtensionConfig_AllowUsingRoads.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FPopulationExtensionConfig_AllowUsingRoads : public FPopulationExtensionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsUseMode Mode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPopulationSpawnDistributionScope SpawnDistributionScope;
    
    FPopulationExtensionConfig_AllowUsingRoads();
};

