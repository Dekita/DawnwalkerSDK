#pragma once
#include "CoreMinimal.h"
#include "EItemRarityType.h"
#include "LootRaritySetting.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FLootRaritySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemRarityType, float> RarityProbabilities;
    
    FLootRaritySetting();
};

