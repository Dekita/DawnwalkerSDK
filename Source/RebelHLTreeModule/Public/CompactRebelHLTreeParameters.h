#pragma once
#include "CoreMinimal.h"
#include "StructUtils/PropertyBag.h"
#include "CompactRebelHLTreeParameters.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FCompactRebelHLTreeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Parameters;
    
    FCompactRebelHLTreeParameters();
};

