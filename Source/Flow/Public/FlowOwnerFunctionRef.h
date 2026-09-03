#pragma once
#include "CoreMinimal.h"
#include "FlowOwnerFunctionRef.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FLOW_API FFlowOwnerFunctionRef {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
public:
    FFlowOwnerFunctionRef();
};

