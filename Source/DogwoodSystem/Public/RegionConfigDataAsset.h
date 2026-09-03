#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RegionConfigDataAsset.generated.h"

class UDataTable;
class UObject;

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API URegionConfigDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RegionDataTable;
    
public:
    URegionConfigDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    uint8 GetRegionLevel(const UObject* WorldContextObject, const int32 RegionIndex) const;
    
};

