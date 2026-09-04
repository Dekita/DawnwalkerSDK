#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreePropertyAccessType.h"
#include "RebelHLTreeIndex16.h"
#include "RebelHLTreePropertyIndirection.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyIndirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 ArrayIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeIndex16 NextIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelHLTreePropertyAccessType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* InstanceStruct;
    
    FRebelHLTreePropertyIndirection();
};

