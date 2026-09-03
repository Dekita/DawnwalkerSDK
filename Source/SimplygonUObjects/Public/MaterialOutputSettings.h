#pragma once
#include "CoreMinimal.h"
#include "MaterialOutputSettings.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FMaterialOutputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ParentMaterialOverride;
    
    FMaterialOutputSettings();
};

