#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams.h"
#include "RebelAIParams_MoveToPreferredRangeNodes.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_MoveToPreferredRangeNodes : public FRebelAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvaluateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredFrontArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnTowardsMovementDirectionBeforeMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrioritisedAlias;
    
    FRebelAIParams_MoveToPreferredRangeNodes();
};

