#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_WaitForEvent.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_WaitForEvent : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowExecutingMultipleTimes;
    
    FRebelAIActionFragment_WaitForEvent();
};

