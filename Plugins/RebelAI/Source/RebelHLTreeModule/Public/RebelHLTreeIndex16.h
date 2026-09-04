#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeIndex16.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeIndex16 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
public:
    FRebelHLTreeIndex16();
};

