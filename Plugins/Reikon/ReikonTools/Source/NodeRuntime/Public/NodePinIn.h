#pragma once
#include "CoreMinimal.h"
#include "NodePinIn.generated.h"

USTRUCT(BlueprintType)
struct FNodePinIn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NodeGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputPinIdx;
    
    NODERUNTIME_API FNodePinIn();
};

