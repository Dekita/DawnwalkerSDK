#pragma once
#include "CoreMinimal.h"
#include "RebelAITrait.h"
#include "RebelAITrait_Aggression.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAITrait_Aggression : public FRebelAITrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAggression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePositioningOrbits: 1;
    
    FRebelAITrait_Aggression();
};

