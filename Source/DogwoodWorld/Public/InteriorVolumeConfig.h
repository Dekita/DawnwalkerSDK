#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InteriorVolumeData.h"
#include "InteriorVolumeConfig.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UInteriorVolumeConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorVolumeData InteriorVolumeData;
    
    UInteriorVolumeConfig();

};

