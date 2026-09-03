#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Registrable.h"
#include "RebelAILogicNode_Trigger.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Trigger : public FRebelAILogicNode_Registrable {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Trigger();
};

