#pragma once
#include "CoreMinimal.h"
#include "FactTemplate.h"
#include "FlowFactBoolCondition.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FFlowFactBoolCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactTemplate Fact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpectedValue;
    
    FFlowFactBoolCondition();
};

