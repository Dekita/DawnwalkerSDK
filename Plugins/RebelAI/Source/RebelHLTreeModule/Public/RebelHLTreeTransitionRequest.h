#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeTransitionPriority.h"
#include "RebelHLTreeStateHandle.h"
#include "RebelHLTreeTransitionRequest.generated.h"

class URebelHLTree;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeTransitionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle SourceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelHLTree* SourceRebelHLTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle SourceRootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeTransitionPriority Priority;
    
    FRebelHLTreeTransitionRequest();
};

