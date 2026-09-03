#pragma once
#include "CoreMinimal.h"
#include "ERebelAIMontageRandomizationType.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_AdditionalMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_AdditionalMontage : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimMontage>> Montages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAFaceMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIMontageRandomizationType MontageRandomizationType;
    
    FRebelAIActionFragment_AdditionalMontage();
};

