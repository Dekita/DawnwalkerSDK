#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RebelGridSettings.generated.h"

class URebelGridsConfig;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class REBELGRID_API URebelGridSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URebelGridsConfig> Config;
    
    URebelGridSettings();

};

