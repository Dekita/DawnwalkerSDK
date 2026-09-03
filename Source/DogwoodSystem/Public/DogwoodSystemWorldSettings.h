#pragma once
#include "CoreMinimal.h"
#include "QuestWorldSettings.h"
#include "DogwoodSystemWorldSettings.generated.h"

class URegionConfigDataAsset;
class URegionMapConfigDataAsset;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API ADogwoodSystemWorldSettings : public AQuestWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GameTimeDilation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGameWorld: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAutomaticSavegames: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URegionMapConfigDataAsset* RegionMapConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URegionConfigDataAsset* RegionConfig;
    
    ADogwoodSystemWorldSettings(const FObjectInitializer& ObjectInitializer);

};

