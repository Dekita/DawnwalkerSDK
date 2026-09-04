#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GamepadLightbarSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Platforms)
class GAMEPADLIGHTBARSYSTEM_API UGamepadLightbarSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LightbarPresets;
    
    UGamepadLightbarSettings();

};

