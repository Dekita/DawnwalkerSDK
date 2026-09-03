#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Registrable.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Registrable : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Registrable();
};

