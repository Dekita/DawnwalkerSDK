#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBiomesPCGMaskDataSource.h"
#include "BiomesPCGMaskSource.generated.h"

USTRUCT(BlueprintType)
struct ERRANTBIOMESPCG_API FBiomesPCGMaskSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SourceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBiomesPCGMaskDataSource MaskDataSource;
    
    FBiomesPCGMaskSource();
};
FORCEINLINE uint32 GetTypeHash(const FBiomesPCGMaskSource) { return 0; }

