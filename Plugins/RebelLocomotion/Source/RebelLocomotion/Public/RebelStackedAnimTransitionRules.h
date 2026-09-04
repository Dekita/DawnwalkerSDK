#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionAnimTransitionRules.h"
#include "RebelStackedAnimTransitionRules.generated.h"

USTRUCT(BlueprintType)
struct FRebelStackedAnimTransitionRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionAnimTransitionRules TransitionRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionRulesHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    REBELLOCOMOTION_API FRebelStackedAnimTransitionRules();
};

