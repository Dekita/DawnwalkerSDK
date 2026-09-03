#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeAnyEnum.h"
#include "RebelHLTreeCompareEnumConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeCompareEnumConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeAnyEnum Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeAnyEnum Right;
    
    FRebelHLTreeCompareEnumConditionInstanceData();
};

