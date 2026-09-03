#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Await.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Await : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CoroutineNames;
    
    FRebelAILogicNode_Await();
};

