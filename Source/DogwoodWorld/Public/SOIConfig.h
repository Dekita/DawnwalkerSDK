#pragma once
#include "CoreMinimal.h"
#include "ESOIObjectDistance.h"
#include "InvestigationTutorialFlowTags.h"
#include "SOIConfig.generated.h"

USTRUCT(BlueprintType)
struct FSOIConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivePointRadialDistanceDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVisiblePointRadialDistanceDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESOIObjectDistance, float> ObjectDistanceFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvestigationTutorialFlowTags InvestigationTutorialFlowTags;
    
    DOGWOODWORLD_API FSOIConfig();
};

