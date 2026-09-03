#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EActionFragment_FilterOperator.h"
#include "RebelAIActionFragment_Filter.h"
#include "RebelAIActionFragment_Filter_Complex.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Filter_Complex : public FRebelAIActionFragment_Filter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionFragment_FilterOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    FRebelAIActionFragment_Filter_Complex();
};

