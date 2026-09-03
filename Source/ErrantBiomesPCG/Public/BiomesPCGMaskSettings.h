#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGSettings.h"
#include "EBiomesPCGMaskDataSource.h"
#include "EBiomesPCGMaskType.h"
#include "BiomesPCGMaskSettings.generated.h"

class UBiomesMaskAsset;

UCLASS(Blueprintable)
class ERRANTBIOMESPCG_API UBiomesPCGMaskSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBiomesPCGMaskType MaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBiomesPCGMaskDataSource Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BiomesAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBiomesMaskAsset> BiomesMaskAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackValue;
    
    UBiomesPCGMaskSettings();

};

