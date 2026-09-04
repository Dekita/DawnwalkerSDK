#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreePropertyPathSegment.h"
#include "RebelHLTreePropertyPath.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreePropertyPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreePropertyPathSegment> Segments;
    
public:
    FRebelHLTreePropertyPath();
};

