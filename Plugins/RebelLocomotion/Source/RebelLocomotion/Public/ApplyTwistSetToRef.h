#pragma once
#include "CoreMinimal.h"
#include "ApplyTwistSetToRef.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FApplyTwistSetToRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetRootCorrectiveChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetTwistBonesChildren;
    
    FApplyTwistSetToRef();
};

