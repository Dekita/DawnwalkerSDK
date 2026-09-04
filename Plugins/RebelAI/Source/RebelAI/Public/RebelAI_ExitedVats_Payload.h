#pragma once
#include "CoreMinimal.h"
#include "RebelAI_Payload.h"
#include "RebelAI_ExitedVats_Payload.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_ExitedVats_Payload : public FRebelAI_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> ExitMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendInstant;
    
    FRebelAI_ExitedVats_Payload();
};

