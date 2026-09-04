#pragma once
#include "CoreMinimal.h"
#include "ERebelAIMontageRandomizationType.h"
#include "RebelAIActionFragment.h"
#include "RebelAIActionFragment_Montage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Montage : public FRebelAIActionFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimMontage>> Montages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRandomizedPlayrateModifiersFromAIConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIMontageRandomizationType MontageRandomizationType;
    
    FRebelAIActionFragment_Montage();
};

