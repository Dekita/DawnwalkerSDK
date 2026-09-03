#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition.h"
#include "DawnwalkerAIStateTreeCondition_isRaining.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIStateTreeCondition_isRaining : public FRebelAIStateTreeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FDawnwalkerAIStateTreeCondition_isRaining();
};

