#pragma once
#include "CoreMinimal.h"
#include "RebelNavigationVoxelSpan.generated.h"

USTRUCT(BlueprintType)
struct FRebelNavigationVoxelSpan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZMax;
    
    REBELNAVIGATION_API FRebelNavigationVoxelSpan();
};

