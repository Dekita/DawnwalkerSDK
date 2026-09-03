#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_InstanceDataScope.h"
#include "RebelAILogicNode_FilterBase.h"
#include "RebelAILogicNode_Filter_SmartRandom.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_SmartRandom : public FRebelAILogicNode_FilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicTree_InstanceDataScope InstanceDataScope;
    
    FRebelAILogicNode_Filter_SmartRandom();
};

