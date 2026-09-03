#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelSpatialSystemSettings.generated.h"

class URebelSpatialSystemConfig;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELSPATIALSYSTEM_API URebelSpatialSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelSpatialSystemConfig> Config;
    
    URebelSpatialSystemSettings();

};

