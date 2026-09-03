#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_Untargetable.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_Untargetable : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator_Untargetable();
};

