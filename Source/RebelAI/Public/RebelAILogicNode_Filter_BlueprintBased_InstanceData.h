#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_InstanceData.h"
#include "RebelAILogicNode_Filter_BlueprintBased_InstanceData.generated.h"

class URebelAILogicNode_Filter_BlueprintBase;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_BlueprintBased_InstanceData : public FRebelAILogicNode_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelAILogicNode_Filter_BlueprintBase* BlueprintInstance;
    
    FRebelAILogicNode_Filter_BlueprintBased_InstanceData();
};

