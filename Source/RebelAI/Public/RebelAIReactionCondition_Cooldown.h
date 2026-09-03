#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_Cooldown.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_Cooldown : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    FRebelAIReactionCondition_Cooldown();
};

