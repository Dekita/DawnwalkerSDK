#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIParams_Task.h"
#include "RebelAIParams_Task_MoveTowardGuardArea.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Task_MoveTowardGuardArea : public FRebelAIParams_Task {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Timeout;
    
    FRebelAIParams_Task_MoveTowardGuardArea();
};

