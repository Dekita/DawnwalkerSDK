#pragma once
#include "CoreMinimal.h"
#include "NpcLevelScalingDelayValues.generated.h"

USTRUCT(BlueprintType)
struct FNpcLevelScalingDelayValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayLevelScalingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightLevelScalingDelay;
    
    POPULATION_API FNpcLevelScalingDelayValues();
};

