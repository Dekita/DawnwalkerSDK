#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_Tags.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_Tags : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ASCLooseTags;
    
    FRebelAILogicNodeDecorator_Tags();
};

