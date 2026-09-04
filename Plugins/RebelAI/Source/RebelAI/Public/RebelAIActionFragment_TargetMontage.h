#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_TargetMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_TargetMontage : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FRebelAIActionFragment_TargetMontage();
};

