#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_InstigatorInFront.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_InstigatorInFront : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptedAngle;
    
    FRebelAIReactionCondition_InstigatorInFront();
};

