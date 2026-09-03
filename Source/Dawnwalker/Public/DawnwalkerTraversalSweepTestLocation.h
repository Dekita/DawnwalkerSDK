#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerTraversalSweepTestLocation.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTraversalSweepTestLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LedgeRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTestDirectionAsForwardAxis;
    
    FDawnwalkerTraversalSweepTestLocation();
};

