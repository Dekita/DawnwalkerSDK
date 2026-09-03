#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GarmentOffsetParamMultipliers.h"
#include "GarmentOffsetMultiplierRow.generated.h"

class USkinnedAsset;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGarmentOffsetMultiplierRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkinnedAsset>> Garments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGarmentOffsetParamMultipliers> MultipliersByAnimationType;
    
    FGarmentOffsetMultiplierRow();
};

