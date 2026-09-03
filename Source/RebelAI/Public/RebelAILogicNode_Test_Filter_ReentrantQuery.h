#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAILogicNode_Filter.h"
#include "RebelAILogicNode_Test_Filter_ReentrantQuery.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Test_Filter_ReentrantQuery : public FRebelAILogicNode_Filter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRunNestedQuery: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysPassAfterNestedQuery: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NestedQueryTypeTag;
    
    FRebelAILogicNode_Test_Filter_ReentrantQuery();
};

