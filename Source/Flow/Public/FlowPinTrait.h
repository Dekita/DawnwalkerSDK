#pragma once
#include "CoreMinimal.h"
#include "FlowPinTrait.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowPinTrait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTraitAllowed: 1;
    
public:
    FFlowPinTrait();
};

