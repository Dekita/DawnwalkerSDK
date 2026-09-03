#pragma once
#include "CoreMinimal.h"
#include "SynchronisedAnimation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FSynchronisedAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InstigatorMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TargetMontage;
    
    FSynchronisedAnimation();
};

