#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeDataHandle.h"
#include "RebelHLTreePropertyPath.h"
#include "RebelHLTreePropertyRefPath.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyRefPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreePropertyPath SourcePropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelHLTreeDataHandle SourceDataHandle;
    
public:
    FRebelHLTreePropertyRefPath();
};

