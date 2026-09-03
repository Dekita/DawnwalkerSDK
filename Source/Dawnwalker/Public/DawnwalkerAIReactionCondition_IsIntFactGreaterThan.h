#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_IsIntFactGreaterThan.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_IsIntFactGreaterThan : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FDawnwalkerAIReactionCondition_IsIntFactGreaterThan();
};

