#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeObjectEqualsConditionInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeObjectEqualsConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Right;
    
    FRebelHLTreeObjectEqualsConditionInstanceData();
};

