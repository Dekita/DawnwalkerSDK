#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreePropertyIndirection.h"
#include "RebelHLTreePropertyAccess.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyAccess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertyIndirection SourceIndirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStruct* SourceStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle SourceDataHandle;
    
    FRebelHLTreePropertyAccess();
};

