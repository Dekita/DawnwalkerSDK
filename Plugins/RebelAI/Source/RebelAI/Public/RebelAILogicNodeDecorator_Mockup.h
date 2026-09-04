#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_Mockup.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_Mockup : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FRebelAILogicNodeDecorator_Mockup();
};

