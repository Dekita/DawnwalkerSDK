#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_LookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_LookAtTarget : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator_LookAtTarget();
};

