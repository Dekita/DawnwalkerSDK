#pragma once
#include "CoreMinimal.h"
#include "EItemRarityType.h"
#include "EItemType.h"
#include "LoogBagsPreservationConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FLoogBagsPreservationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveBagsWithAnyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EItemType> PreservingItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EItemRarityType> PreservingItemRarities;
    
    FLoogBagsPreservationConfig();
};

