#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateTreeDistancePropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FStateTreeDistancePropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FStateTreeDistancePropertyFunctionInstanceData();
};

