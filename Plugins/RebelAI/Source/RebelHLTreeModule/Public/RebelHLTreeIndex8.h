#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeIndex8.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeIndex8 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
public:
    FRebelHLTreeIndex8();
};

