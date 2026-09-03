#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeStateHandle.h"
#include "RebelHLTreeActiveStates.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeActiveStates {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle States[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumStates;
    
    FRebelHLTreeActiveStates();
};

