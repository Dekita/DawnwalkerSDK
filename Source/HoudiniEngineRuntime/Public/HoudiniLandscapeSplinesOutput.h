#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniLandscapeSplinesOutput.generated.h"

class ALandscape;
class ALandscapeProxy;
class ALandscapeSplineActor;
class UHoudiniLandscapeSplineTargetLayerOutput;
class ULandscapeSplineControlPoint;
class ULandscapeSplineSegment;
class ULandscapeSplinesComponent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeSplinesOutput : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscape* Landscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscapeProxy* LandscapeProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscapeSplineActor* LandscapeSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandscapeSplinesComponent* LandscapeSplinesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UHoudiniLandscapeSplineTargetLayerOutput*> LayerOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeSplineSegment*> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeSplineControlPoint*> ControlPoints;
    
public:
    UHoudiniLandscapeSplinesOutput();

};

