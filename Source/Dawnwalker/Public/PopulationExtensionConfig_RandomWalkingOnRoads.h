#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EPopulationSpawnDistributionScope.h"
#include "PopulationExtensionConfig.h"
#include "PopulationExtensionConfig_RandomWalkingOnRoads.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FPopulationExtensionConfig_RandomWalkingOnRoads : public FPopulationExtensionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPopulationSpawnDistributionScope SpawnDistributionScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ZoneTag;
    
    FPopulationExtensionConfig_RandomWalkingOnRoads();
};

