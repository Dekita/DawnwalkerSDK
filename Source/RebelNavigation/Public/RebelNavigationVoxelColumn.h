#pragma once
#include "CoreMinimal.h"
#include "RebelNavigationVoxelSpan.h"
#include "RebelNavigationVoxelColumn.generated.h"

USTRUCT(BlueprintType)
struct REBELNAVIGATION_API FRebelNavigationVoxelColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelNavigationVoxelSpan> Spans;
    
    FRebelNavigationVoxelColumn();
};

