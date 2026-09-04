#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIParams_Task.h"
#include "RebelAIParams_Task_MoveToRange.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Task_MoveToRange : public FRebelAIParams_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnTowardsMovementDirectionBeforeMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepMovingUntilTargetIsReallyReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToAPointWithLineOfSight;
    
    FRebelAIParams_Task_MoveToRange();
};

