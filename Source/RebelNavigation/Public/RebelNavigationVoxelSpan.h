#pragma once
#include "CoreMinimal.h"
#include "RebelNavigationVoxelSpan.generated.h"

USTRUCT(BlueprintType)
struct REBELNAVIGATION_API FRebelNavigationVoxelSpan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZMax;
    
    FRebelNavigationVoxelSpan();
};

