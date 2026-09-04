#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreePropertyPath.h"
#include "RebelHLTreePropertyPathBinding.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyPathBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertyPath SourcePropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertyPath TargetPropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle SourceDataHandle;
    
public:
    FRebelHLTreePropertyPathBinding();
};

