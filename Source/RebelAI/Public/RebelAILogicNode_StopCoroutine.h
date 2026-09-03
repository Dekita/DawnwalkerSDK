#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_StopCoroutine.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_StopCoroutine : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FRebelAILogicNode_StopCoroutine();
};

