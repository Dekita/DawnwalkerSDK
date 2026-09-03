#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub.h"
#include "RebelAIStateTreeTask_AIStub_PerformAction.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_PerformAction : public FRebelAIStateTreeTask_AIStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopActionOnExitState;
    
    FRebelAIStateTreeTask_AIStub_PerformAction();
};

