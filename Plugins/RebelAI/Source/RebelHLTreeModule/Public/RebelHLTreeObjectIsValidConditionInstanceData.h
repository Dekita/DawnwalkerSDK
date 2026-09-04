#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeObjectIsValidConditionInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeObjectIsValidConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FRebelHLTreeObjectIsValidConditionInstanceData();
};

