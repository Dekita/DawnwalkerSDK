#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TraversalHelperEdge.generated.h"

USTRUCT(BlueprintType)
struct FTraversalHelperEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector B;
    
    DAWNWALKER_API FTraversalHelperEdge();
};

