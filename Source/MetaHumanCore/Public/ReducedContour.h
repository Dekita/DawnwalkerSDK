#pragma once
#include "CoreMinimal.h"
#include "ControlVertex.h"
#include "ReducedContour.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FReducedContour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlVertex> ControlVertices;
    
    FReducedContour();
};

