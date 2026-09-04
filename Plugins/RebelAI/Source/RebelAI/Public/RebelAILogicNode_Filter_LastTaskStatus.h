#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_FilterBase.h"
#include "RebelAILogicNode_Filter_LastTaskStatus.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_LastTaskStatus : public FRebelAILogicNode_FilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceeded;
    
    FRebelAILogicNode_Filter_LastTaskStatus();
};

