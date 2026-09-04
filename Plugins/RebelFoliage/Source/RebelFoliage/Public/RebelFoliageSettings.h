#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelFoliageSettings.generated.h"

class URebelFoliageMetadataDataAsset;
class URebelFoliageSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELFOLIAGE_API URebelFoliageSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelFoliageMetadataDataAsset> FoliageMetadataDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
    URebelFoliageSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelFoliageSettings* Get();
    
};

