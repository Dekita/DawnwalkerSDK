#pragma once
#include "CoreMinimal.h"
#include "RebelSpineIKGroundDistanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FRebelSpineIKGroundDistanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootHeight;
    
    REBELLOCOMOTION_API FRebelSpineIKGroundDistanceSettings();
};

