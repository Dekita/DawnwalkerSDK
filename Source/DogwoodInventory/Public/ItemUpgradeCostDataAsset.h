#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EEquipmentSlotType.h"
#include "EItemRarityType.h"
#include "ItemUpgradeCostDataAsset.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemUpgradeCostDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpgradeCostBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeMultiplierFlat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeMultiplierLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemRarityType, float> UpgradeMultipliersRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlotType, float> UpgradeMultipliersSlotType;
    
    UItemUpgradeCostDataAsset();

};

