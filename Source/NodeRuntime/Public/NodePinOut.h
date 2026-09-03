#pragma once
#include "CoreMinimal.h"
#include "NodePinIn.h"
#include "NodePinOut.generated.h"

USTRUCT(BlueprintType)
struct NODERUNTIME_API FNodePinOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputPinIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodePinIn> Inputs;
    
    FNodePinOut();
};

