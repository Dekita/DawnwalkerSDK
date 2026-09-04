#pragma once
#include "CoreMinimal.h"
#include "RebelNavigationExportStats.generated.h"

USTRUCT(BlueprintType)
struct FRebelNavigationExportStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemUsage;
    
    REBELNAVIGATION_API FRebelNavigationExportStats();
};

