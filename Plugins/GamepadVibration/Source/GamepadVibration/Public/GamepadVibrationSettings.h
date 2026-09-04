#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EVibrationPreset.h"
#include "GamepadVibrationSettings.generated.h"

class UDataTable;
class UFeedbackBehavior;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class GAMEPADVIBRATION_API UGamepadVibrationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVibrationPreset, TSoftObjectPtr<UFeedbackBehavior>> VibrationPresetMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VibrationTimeScaleModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> VibrationsConfig;
    
    UGamepadVibrationSettings();

};

