#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams.h"
#include "RebelAIParams_Task_MoveToOrbit.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Task_MoveToOrbit : public FRebelAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    FRebelAIParams_Task_MoveToOrbit();
};

