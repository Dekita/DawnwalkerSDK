#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeCompareIntConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeCompareIntConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Right;
    
    FRebelHLTreeCompareIntConditionInstanceData();
};

