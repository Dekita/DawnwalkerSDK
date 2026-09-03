#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BiomesPCGMaskData.h"
#include "BiomesPCGMaskSource.h"
#include "BiomesPCGSpeciesPointsData.h"
#include "BiomesPCGSpeciesPointsLowerPrecisionData.h"
#include "BiomesPCGComponentData.generated.h"

UCLASS(Blueprintable)
class ERRANTBIOMESPCG_API UBiomesPCGComponentData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BiomesSettingsHash;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComponentX;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComponentY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FBiomesPCGMaskSource, FBiomesPCGMaskData> MaskDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FBiomesPCGSpeciesPointsData> SpeciesPointsDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FBiomesPCGSpeciesPointsLowerPrecisionData> SpeciesPointsLowerPrecisionDataMap;
    
    UBiomesPCGComponentData();

};

