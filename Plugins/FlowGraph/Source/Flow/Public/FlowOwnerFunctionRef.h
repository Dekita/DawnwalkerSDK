#pragma once
#include "CoreMinimal.h"
#include "FlowOwnerFunctionRef.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FFlowOwnerFunctionRef {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
public:
    FLOW_API FFlowOwnerFunctionRef();
};

