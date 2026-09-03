#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WwiseGeometrySurfacePropertiesRow.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct AKAUDIO_API FWwiseGeometrySurfacePropertiesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransmissionLoss;
    
    FWwiseGeometrySurfacePropertiesRow();
};

