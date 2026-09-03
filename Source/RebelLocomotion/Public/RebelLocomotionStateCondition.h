#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERebelLocomotionStateVariable.h"
#include "RebelLocomotionStateCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelLocomotionStateCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelLocomotionStateVariable StateVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ValueRange;
    
    FRebelLocomotionStateCondition();
};

