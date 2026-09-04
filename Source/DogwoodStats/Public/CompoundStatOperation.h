#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "ECompoundStatOperand.h"
#include "CompoundStatOperation.generated.h"

USTRUCT(BlueprintType)
struct FCompoundStatOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompoundStatOperand Operand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Value;
    
    DOGWOODSTATS_API FCompoundStatOperation();
};

