#pragma once
#include "CoreMinimal.h"
#include "VampireHungerPostProcessSettings.generated.h"

class UMaterialInterface;
class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct DOGWOODVAMPIREHUNGER_API FVampireHungerPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* ParametersCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    FVampireHungerPostProcessSettings();
};

