#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreeExternalDataHandle.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeExternalDataHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle DataHandle;
    
    FRebelHLTreeExternalDataHandle();
};

