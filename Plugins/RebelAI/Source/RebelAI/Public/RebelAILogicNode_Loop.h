#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Loop_Mode.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Loop.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Loop : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNode_Loop_Mode LoopMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    FRebelAILogicNode_Loop();
};

