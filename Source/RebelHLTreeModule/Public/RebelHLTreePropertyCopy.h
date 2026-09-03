#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreePropertyCopyType.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreePropertyIndirection.h"
#include "RebelHLTreePropertyCopy.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyCopy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertyIndirection SourceIndirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertyIndirection TargetIndirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStruct* SourceStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CopySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle SourceDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreePropertyCopyType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 SourceStructIndex;
    
    FRebelHLTreePropertyCopy();
};

