#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreePropertyRef.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyRef {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 RefAccessIndex;
    
public:
    FRebelHLTreePropertyRef();
};

