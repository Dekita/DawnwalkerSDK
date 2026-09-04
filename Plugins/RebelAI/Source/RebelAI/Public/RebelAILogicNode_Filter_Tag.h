#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAILogicNode_Filter.h"
#include "RebelAILogicNode_Filter_Tag.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_Tag : public FRebelAILogicNode_Filter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FRebelAILogicNode_Filter_Tag();
};

