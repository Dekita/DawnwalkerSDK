#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerTraversalSweepTestLocation.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerTraversalSweepTestLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LedgeRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTestDirectionAsForwardAxis;
    
    DAWNWALKER_API FDawnwalkerTraversalSweepTestLocation();
};

