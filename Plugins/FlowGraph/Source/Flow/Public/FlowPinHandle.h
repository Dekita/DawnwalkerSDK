#pragma once
#include "CoreMinimal.h"
#include "FlowPinHandle.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowPinHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    FFlowPinHandle();
};

