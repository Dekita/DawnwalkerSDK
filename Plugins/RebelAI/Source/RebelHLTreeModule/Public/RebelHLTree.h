#pragma once
#include "CoreMinimal.h"
#include "StructUtils/PropertyBag.h"
#include "StructUtils/InstancedStructContainer.h"
#include "Engine/DataAsset.h"
#include "CompactRebelHLTreeState.h"
#include "RebelHLTreeCompactStateTransition.h"
#include "RebelHLTreeExternalDataDesc.h"
#include "RebelHLTreeInstanceData.h"
#include "RebelHLTreeNodeIdToIndex.h"
#include "RebelHLTreePropertyBindings.h"
#include "RebelHLTreeStateIdToHandle.h"
#include "RebelHLTreeTransitionIdToIndex.h"
#include "RebelHLTree.generated.h"

class URebelHLTreeSchema;

UCLASS(Blueprintable)
class REBELHLTREEMODULE_API URebelHLTree : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastCompiledEditorDataHash;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelHLTreeSchema* Schema;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompactRebelHLTreeState> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeCompactStateTransition> Transitions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStructContainer Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeInstanceData DefaultInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeInstanceData SharedInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeExternalDataDesc> ContextDataDescs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertyBindings PropertyBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeStateIdToHandle> IDToStateMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeNodeIdToIndex> IDToNodeMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeTransitionIdToIndex> IDToTransitionMappings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Parameters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumContextData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumGlobalInstanceData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 EvaluatorsBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 EvaluatorsNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GlobalTasksBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GlobalTasksNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasGlobalTransitionTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeExternalDataDesc> ExternalDataDescs;
    
public:
    URebelHLTree();

};

