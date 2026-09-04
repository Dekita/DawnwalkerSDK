#pragma once
#include "CoreMinimal.h"
#include "StructUtils/PropertyBag.h"
#include "StructUtils/InstancedStructContainer.h"
#include "RebelHLTreeEventQueue.h"
#include "RebelHLTreeExecutionState.h"
#include "RebelHLTreeTemporaryInstanceData.h"
#include "RebelHLTreeTransitionRequest.h"
#include "RebelHLTreeInstanceStorage.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeInstanceStorage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeExecutionState ExecutionState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStructContainer InstanceStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeTemporaryInstanceData> TemporaryInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeEventQueue EventQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeTransitionRequest> TransitionRequests;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag GlobalParameters;
    
public:
    FRebelHLTreeInstanceStorage();
};

