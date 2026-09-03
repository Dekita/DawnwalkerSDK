#pragma once
#include "CoreMinimal.h"
#include "NodePinOut.h"
#include "NodeOutLinks.generated.h"

USTRUCT(BlueprintType)
struct NODERUNTIME_API FNodeOutLinks {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodePinOut> OutLinks;
    
    FNodeOutLinks();
};

