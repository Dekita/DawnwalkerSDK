#pragma once
#include "CoreMinimal.h"
#include "RebelSpineIKInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct FRebelSpineIKInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    REBELLOCOMOTION_API FRebelSpineIKInterpolationSettings();
};

