#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERebelFoliageMetadataType.h"
#include "RebelFoliageMetadataEntry.h"
#include "RebelFoliageMetadataDataAsset.generated.h"

UCLASS(Blueprintable)
class REBELFOLIAGE_API URebelFoliageMetadataDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelFoliageMetadataType, FRebelFoliageMetadataEntry> FoliageMetadata;
    
    URebelFoliageMetadataDataAsset();

};

