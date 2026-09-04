#pragma once
#include "CoreMinimal.h"
#include "VampireHungerLevelPostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FVampireHungerLevelPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    DOGWOODVAMPIREHUNGER_API FVampireHungerLevelPostProcessSettings();
};

