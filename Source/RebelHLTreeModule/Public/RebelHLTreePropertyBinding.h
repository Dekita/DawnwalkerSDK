#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreePropertyCopyType.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreePropertySegment.h"
#include "RebelHLTreePropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertySegment SourcePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertySegment TargetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 SourceStructIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreePropertyCopyType CopyType;
    
    FRebelHLTreePropertyBinding();
};

