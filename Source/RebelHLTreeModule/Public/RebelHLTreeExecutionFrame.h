#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeActiveStates.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreeStateHandle.h"
#include "RebelHLTreeExecutionFrame.generated.h"

class URebelHLTree;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeExecutionFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelHLTree* RebelHLTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeStateHandle RootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeActiveStates ActiveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 ExternalDataBaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 GlobalInstanceIndexBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 ActiveInstanceIndexBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle StateParameterDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle GlobalParameterDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGlobalFrame: 1;
    
    FRebelHLTreeExecutionFrame();
};

