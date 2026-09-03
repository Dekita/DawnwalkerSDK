#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "ECameraType.h"
#include "SkyCreatorInteriorFogSettings.h"
#include "EInteriorVolumeType.h"
#include "InteriorVolumePostProcessCurve.h"
#include "InteriorVolumeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FInteriorVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorVolumePostProcessCurve PostProcessCurveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteriorVolumeType VolumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraType VolumeCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKickOutPlayerAtNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* KickOutTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorInteriorFogSettings InteriorFogSettings;
    
    FInteriorVolumeData();
};

