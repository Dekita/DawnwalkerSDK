#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelNavigationCachedConvexMesh.generated.h"

USTRUCT(BlueprintType)
struct REBELNAVIGATION_API FRebelNavigationCachedConvexMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    FRebelNavigationCachedConvexMesh();
};

