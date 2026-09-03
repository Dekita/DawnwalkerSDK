#pragma once
#include "CoreMinimal.h"
#include "AutoReverbMapping.generated.h"

class UAutoReverbMaterialPreset;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct WWISEEXTENSIONS_API FAutoReverbMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoReverbMaterialPreset* AutoReverbPreset;
    
    FAutoReverbMapping();
};

