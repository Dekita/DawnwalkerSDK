#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsAvoidanceParams.generated.h"

USTRUCT(BlueprintType)
struct REBELROADS_API FRebelRoadsAvoidanceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceStartThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceStopThreshold;
    
    FRebelRoadsAvoidanceParams();
};

