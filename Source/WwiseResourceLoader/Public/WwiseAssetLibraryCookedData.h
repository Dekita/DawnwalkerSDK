#pragma once
#include "CoreMinimal.h"
#include "WwisePackagedFile.h"
#include "WwiseAssetLibraryCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseAssetLibraryCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWwisePackagedFile> PackagedFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    FWwiseAssetLibraryCookedData();
};

