#pragma once
#include "CoreMinimal.h"
#include "BiomesPCGMaskData.generated.h"

USTRUCT(BlueprintType)
struct ERRANTBIOMESPCG_API FBiomesPCGMaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> MaskData;
    
    FBiomesPCGMaskData();
};

