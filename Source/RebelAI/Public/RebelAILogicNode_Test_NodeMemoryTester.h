#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_InstanceDataScope.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Test_NodeMemoryTester.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Test_NodeMemoryTester : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicTree_InstanceDataScope DataScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDuration;
    
    FRebelAILogicNode_Test_NodeMemoryTester();
};

