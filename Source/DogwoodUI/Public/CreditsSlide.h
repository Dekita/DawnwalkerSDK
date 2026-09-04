#pragma once
#include "CoreMinimal.h"
#include "ERebelSKURegion.h"
#include "CreditsEntry.h"
#include "CreditsSlide.generated.h"

class USlateBrushAsset;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCreditsSlide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USlateBrushAsset> DefaultImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSKURegion, TSoftObjectPtr<USlateBrushAsset>> RegionImageOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditsEntry> Entries;
    
    DOGWOODUI_API FCreditsSlide();
};

