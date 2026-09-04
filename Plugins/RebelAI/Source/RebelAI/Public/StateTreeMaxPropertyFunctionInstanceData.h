#pragma once
#include "CoreMinimal.h"
#include "StateTreeMaxPropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FStateTreeMaxPropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FStateTreeMaxPropertyFunctionInstanceData();
};

