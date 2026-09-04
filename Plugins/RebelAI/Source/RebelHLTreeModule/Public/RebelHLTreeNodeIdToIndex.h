#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreeNodeIdToIndex.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeNodeIdToIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 Index;
    
    FRebelHLTreeNodeIdToIndex();
};

