#pragma once
#include "CoreMinimal.h"
#include "WaitingNode.generated.h"

USTRUCT(BlueprintType)
struct NODERUNTIME_API FWaitingNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveInput;
    
    FWaitingNode();
};

