#pragma once
#include "CoreMinimal.h"
#include "DWLeftPoseSettings.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FDWLeftPoseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLeftPoseEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantsRightPose: 1;
    
    FDWLeftPoseSettings();
};

