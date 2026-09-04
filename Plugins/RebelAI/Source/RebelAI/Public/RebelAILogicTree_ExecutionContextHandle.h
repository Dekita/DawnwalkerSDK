#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicTree_ExecutionContextHandle.generated.h"

USTRUCT(BlueprintType)
struct FRebelAILogicTree_ExecutionContextHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ProcessingInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExecutionContextName;
    
    REBELAI_API FRebelAILogicTree_ExecutionContextHandle();
};

