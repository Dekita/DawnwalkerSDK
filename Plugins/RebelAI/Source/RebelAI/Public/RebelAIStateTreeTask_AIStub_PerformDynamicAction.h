#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub.h"
#include "RebelAIStateTreeTask_AIStub_PerformDynamicAction.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_PerformDynamicAction : public FRebelAIStateTreeTask_AIStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsync;
    
    FRebelAIStateTreeTask_AIStub_PerformDynamicAction();
};

