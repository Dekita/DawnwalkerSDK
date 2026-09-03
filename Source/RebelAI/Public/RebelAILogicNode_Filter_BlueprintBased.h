#pragma once
#include "CoreMinimal.h"
#include "RebelAIBlueprintReference.h"
#include "RebelAILogicNode_Filter.h"
#include "RebelAILogicNode_Filter_BlueprintBased.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_BlueprintBased : public FRebelAILogicNode_Filter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBlueprintReference BlueprintReference;
    
    FRebelAILogicNode_Filter_BlueprintBased();
};

