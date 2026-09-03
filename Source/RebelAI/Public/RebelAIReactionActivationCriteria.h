#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionActivationCriteria.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionActivationCriteria {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> CloserThan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> Cooldown;
    
    FRebelAIReactionActivationCriteria();
};

