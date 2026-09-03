#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Task_Wait_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_Wait_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deflection;
    
    FRebelAILogicNode_Task_Wait_InstanceData();
};

