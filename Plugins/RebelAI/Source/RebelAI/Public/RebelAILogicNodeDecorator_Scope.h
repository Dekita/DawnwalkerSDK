#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_Scope.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_Scope : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FRebelAILogicNodeDecorator_Scope();
};

