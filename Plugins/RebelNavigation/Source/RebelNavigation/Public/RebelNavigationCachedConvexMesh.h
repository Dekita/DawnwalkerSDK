#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelNavigationCachedConvexMesh.generated.h"

USTRUCT(BlueprintType)
struct FRebelNavigationCachedConvexMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    REBELNAVIGATION_API FRebelNavigationCachedConvexMesh();
};

