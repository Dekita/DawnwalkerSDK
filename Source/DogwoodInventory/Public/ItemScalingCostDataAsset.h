#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemScalingCostDataAsset.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemScalingCostDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeMultiplierFlat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeMultiplierLevel;
    
    UItemScalingCostDataAsset();

};

