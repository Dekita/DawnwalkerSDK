#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelRoadsSettings.generated.h"

class URebelRoadsConfig;
class URebelRoadsCrossingProfileDataAsset;
class URebelRoadsLaneProfileDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELROADS_API URebelRoadsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelRoadsConfig> Config;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelRoadsLaneProfileDataAsset> DefaultLaneProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelRoadsCrossingProfileDataAsset> DefaultCrossingProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBuildGraph;
    
    URebelRoadsSettings();

};

