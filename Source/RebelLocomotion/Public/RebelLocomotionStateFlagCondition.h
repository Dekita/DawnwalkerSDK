#pragma once
#include "CoreMinimal.h"
#include "ERebelLocomotionStateFlag.h"
#include "RebelLocomotionStateFlagCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionStateFlagCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelLocomotionStateFlag StateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    FRebelLocomotionStateFlagCondition();
};

