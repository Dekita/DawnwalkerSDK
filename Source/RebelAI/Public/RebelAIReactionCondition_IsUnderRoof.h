#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_IsUnderRoof.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_IsUnderRoof : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckSize;
    
    FRebelAIReactionCondition_IsUnderRoof();
};

