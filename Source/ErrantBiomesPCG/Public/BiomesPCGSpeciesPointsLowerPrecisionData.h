#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BiomesPCGSpeciesPointsLowerPrecisionData.generated.h"

USTRUCT(BlueprintType)
struct ERRANTBIOMESPCG_API FBiomesPCGSpeciesPointsLowerPrecisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> Assets;
    
    FBiomesPCGSpeciesPointsLowerPrecisionData();
};

