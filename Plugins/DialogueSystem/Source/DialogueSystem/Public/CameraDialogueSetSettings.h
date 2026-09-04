#pragma once
#include "CoreMinimal.h"
#include "CineCameraSettings.h"
#include "CineCameraSettings.h"
#include "CineCameraSettings.h"
#include "UObject/NoExportTypes.h"
#include "ECameraAdjustmentMode.h"
#include "ECameraShot.h"
#include "Templates/SubclassOf.h"
#include "CameraDialogueSetSettings.generated.h"

class UCinematicCameraShake;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCameraDialogueSetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShot CameraShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraAdjustmentMode AdjustmentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCinematicCameraShake> ShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticFocusEnabled;
    
    FCameraDialogueSetSettings();
};

