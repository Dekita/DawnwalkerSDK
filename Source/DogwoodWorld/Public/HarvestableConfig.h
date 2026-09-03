#pragma once
#include "CoreMinimal.h"
#include "HarvestableConfig.generated.h"

class UItemBaseDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FHarvestableConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuantity;
    
    FHarvestableConfig();
};

