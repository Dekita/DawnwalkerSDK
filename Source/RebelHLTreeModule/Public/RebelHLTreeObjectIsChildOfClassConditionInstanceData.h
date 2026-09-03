#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeObjectIsChildOfClassConditionInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeObjectIsChildOfClassConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    FRebelHLTreeObjectIsChildOfClassConditionInstanceData();
};

