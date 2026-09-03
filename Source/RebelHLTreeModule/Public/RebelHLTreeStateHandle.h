#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeStateHandle.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeStateHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    FRebelHLTreeStateHandle();
};

