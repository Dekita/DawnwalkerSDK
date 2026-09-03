#pragma once
#include "CoreMinimal.h"
#include "EyeIdleLineGenerationData.h"
#include "FaceIdleLineGenerationData.h"
#include "FaceIdleOverlayLineGenerationData.h"
#include "GestureSettings.h"
#include "IdleOverlayLineGenerationData.h"
#include "SpeakerAnimationConfig.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FSpeakerAnimationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartingIdleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleOverlayLineGenerationData StartingIdleOverlaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceIdleLineGenerationData StartingFaceIdleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceIdleOverlayLineGenerationData DefaultFaceIdleOverlaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEyeIdleLineGenerationData StartingEyeIdleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureSettings SpeakingGestureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureSettings ListeningGestureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureSettings HeadGestureSettings;
    
    FSpeakerAnimationConfig();
};

