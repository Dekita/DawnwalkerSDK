#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_IsCrowd.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_IsCrowd : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FDawnwalkerAIReactionCondition_IsCrowd();
};

