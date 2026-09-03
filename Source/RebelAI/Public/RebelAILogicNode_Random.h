#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Random_Algorithm.h"
#include "ERebelAILogicTree_InstanceDataScope.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Random.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Random : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicTree_InstanceDataScope InstanceDataScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNode_Random_Algorithm Algorithm;
    
    FRebelAILogicNode_Random();
};

