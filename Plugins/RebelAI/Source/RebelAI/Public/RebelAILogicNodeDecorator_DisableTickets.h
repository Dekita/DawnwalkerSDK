#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_DisableTickets.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_DisableTickets : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator_DisableTickets();
};

