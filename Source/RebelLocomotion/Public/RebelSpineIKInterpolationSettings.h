#pragma once
#include "CoreMinimal.h"
#include "RebelSpineIKInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelSpineIKInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    FRebelSpineIKInterpolationSettings();
};

