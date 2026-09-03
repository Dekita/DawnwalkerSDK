#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReflectPoint.h"
#include "RWAcoustics.generated.h"

class UAkRtpc;
class UPhysicalMaterial;
class UWwiseExtensionsSettings;

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API URWAcoustics : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* ReflectBusVolumeRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* OutdoorRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReflectPoint> SurfaceAlignedReflectPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReflectPoint> PlayerFacingReflectPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWwiseExtensionsSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* DefaultReverbPresetMaterial;
    
public:
    URWAcoustics();

};

