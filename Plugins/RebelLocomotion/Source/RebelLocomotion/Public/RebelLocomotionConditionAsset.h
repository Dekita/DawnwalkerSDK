#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionStateCondition.h"
#include "RebelLocomotionStateFlagCondition.h"
#include "RebelLocomotionConditionAsset.generated.h"

class URebelLocomotionGameplayTagCondition;

USTRUCT(BlueprintType)
struct FRebelLocomotionConditionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelLocomotionStateCondition> StateConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelLocomotionStateFlagCondition> FlagConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelLocomotionGameplayTagCondition* TagCondition;
    
    REBELLOCOMOTION_API FRebelLocomotionConditionAsset();
};

