#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreeTransitionDelayedState.generated.h"

class URebelHLTree;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeTransitionDelayedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelHLTree* RebelHLTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 TransitionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeft;
    
    FRebelHLTreeTransitionDelayedState();
};

