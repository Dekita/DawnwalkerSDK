#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAcousticTextureParams.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkAcousticTextureParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 AbsorptionValues;
    
    FAkAcousticTextureParams();
};

