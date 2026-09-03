#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Sequence_Mode.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Sequence.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Sequence : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNode_Sequence_Mode Mode;
    
    FRebelAILogicNode_Sequence();
};

