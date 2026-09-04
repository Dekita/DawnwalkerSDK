#pragma once
#include "CoreMinimal.h"
#include "RebelAIBlueprintReference.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Task_BlueprintBased.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_BlueprintBased : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBlueprintReference BlueprintReference;
    
    FRebelAILogicNode_Task_BlueprintBased();
};

