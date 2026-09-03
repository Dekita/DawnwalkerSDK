#pragma once
#include "CoreMinimal.h"
#include "HoudiniLandscapeTargetLayerOutput.h"
#include "HoudiniLandscapeSplineTargetLayerOutput.generated.h"

class ULandscapeSplineSegment;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeSplineTargetLayerOutput : public UHoudiniLandscapeTargetLayerOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AfterEditLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeSplineSegment*> Segments;
    
    UHoudiniLandscapeSplineTargetLayerOutput();

};

