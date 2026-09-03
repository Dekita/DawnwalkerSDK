#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TraversalHelperEdge.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FTraversalHelperEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector B;
    
    FTraversalHelperEdge();
};

