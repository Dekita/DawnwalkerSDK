#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FallAnimationSet.generated.h"

class UAnimMontage;
class URebelLocomotionConditionSet;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FFallAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelLocomotionConditionSet* LocomotionCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Animations;
    
    FFallAnimationSet();
};

