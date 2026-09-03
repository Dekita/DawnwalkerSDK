#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeInstanceObjectWrapper.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeInstanceObjectWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InstanceObject;
    
    FRebelHLTreeInstanceObjectWrapper();
};

