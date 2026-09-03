#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeRunStatus.h"
#include "ERebelHLTreeStateChangeType.h"
#include "ERebelHLTreeTransitionPriority.h"
#include "RebelHLTreeExecutionFrame.h"
#include "RebelHLTreeStateHandle.h"
#include "RebelHLTreeTransitionResult.generated.h"

class URebelHLTree;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeTransitionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeExecutionFrame> NextActiveFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeRunStatus CurrentRunStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle SourceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeStateChangeType ChangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreeTransitionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelHLTree* SourceRebelHLTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle SourceRootState;
    
    FRebelHLTreeTransitionResult();
};

