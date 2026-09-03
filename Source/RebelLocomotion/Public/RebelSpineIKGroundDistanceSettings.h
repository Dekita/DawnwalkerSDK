#pragma once
#include "CoreMinimal.h"
#include "RebelSpineIKGroundDistanceSettings.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelSpineIKGroundDistanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootHeight;
    
    FRebelSpineIKGroundDistanceSettings();
};

