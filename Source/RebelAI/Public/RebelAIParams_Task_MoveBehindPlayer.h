#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIParams_Task.h"
#include "RebelAIParams_Task_MoveBehindPlayer.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Task_MoveBehindPlayer : public FRebelAIParams_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnTowardsMovementDirectionBeforeMoving;
    
    FRebelAIParams_Task_MoveBehindPlayer();
};

