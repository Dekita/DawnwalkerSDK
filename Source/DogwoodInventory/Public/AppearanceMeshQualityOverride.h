#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAppearanceQualityLevelOverride.h"
#include "AppearanceMeshQualityOverride.generated.h"

class USkinnedAsset;

USTRUCT(BlueprintType)
struct FAppearanceMeshQualityOverride : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkinnedAsset> SourceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAppearanceQualityLevelOverride, TSoftObjectPtr<USkinnedAsset>> ReplacementMeshes;
    
    DOGWOODINVENTORY_API FAppearanceMeshQualityOverride();
};

