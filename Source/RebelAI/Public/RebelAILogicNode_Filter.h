#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_FilterBase.h"
#include "RebelAILogicNode_Filter.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter : public FRebelAILogicNode_FilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysPass: 1;
    
    FRebelAILogicNode_Filter();
};

