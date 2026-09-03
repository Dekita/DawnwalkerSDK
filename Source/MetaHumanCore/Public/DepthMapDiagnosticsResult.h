#pragma once
#include "CoreMinimal.h"
#include "DepthMapDiagnosticsResult.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FDepthMapDiagnosticsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFacePixels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFaceValidDepthMapPixels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceWidthInPixels;
    
    FDepthMapDiagnosticsResult();
};

