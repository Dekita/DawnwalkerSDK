#pragma once
#include "CoreMinimal.h"
#include "RebelGenericTreeNodeDecorator.h"
#include "RebelAILogicNodeDecorator.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator : public FRebelGenericTreeNodeDecorator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator();
};

