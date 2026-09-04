#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrailDecalSettings.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTrailDecalSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f Dimensions;
    
    DAWNWALKER_API FTrailDecalSettings();
};

