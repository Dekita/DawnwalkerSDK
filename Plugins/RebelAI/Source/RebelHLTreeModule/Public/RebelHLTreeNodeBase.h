#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreeNodeBase.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 BindingsBatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 InstanceTemplateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle InstanceDataHandle;
    
    FRebelHLTreeNodeBase();
};

