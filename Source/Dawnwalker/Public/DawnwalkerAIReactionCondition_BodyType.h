#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_BodyType.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_BodyType : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BodyType;
    
    FDawnwalkerAIReactionCondition_BodyType();
};

