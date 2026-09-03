#pragma once
#include "CoreMinimal.h"
#include "StructUtils/PropertyBag.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Alias.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Alias : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Parameters;
    
    FRebelAILogicNode_Alias();
};

