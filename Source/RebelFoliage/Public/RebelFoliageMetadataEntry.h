#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelFoliageMetadataEntry.generated.h"

USTRUCT(BlueprintType)
struct REBELFOLIAGE_API FRebelFoliageMetadataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AudioTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VFXTag;
    
    FRebelFoliageMetadataEntry();
};

