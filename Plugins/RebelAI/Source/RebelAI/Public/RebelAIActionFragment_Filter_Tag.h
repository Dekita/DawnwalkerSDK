#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIActionFragment_Filter.h"
#include "RebelAIActionFragment_Filter_Tag.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Filter_Tag : public FRebelAIActionFragment_Filter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FRebelAIActionFragment_Filter_Tag();
};

