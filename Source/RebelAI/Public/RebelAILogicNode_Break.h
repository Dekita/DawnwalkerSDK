#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Break_Scope.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Break.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Break : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNode_Break_Scope Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FRebelAILogicNode_Break();
};

