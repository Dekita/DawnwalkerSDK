#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Filter.h"
#include "RebelAILogicNode_Test_Filter_ConstBool.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Test_Filter_ConstBool : public FRebelAILogicNode_Filter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    FRebelAILogicNode_Test_Filter_ConstBool();
};

