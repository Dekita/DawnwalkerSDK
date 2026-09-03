#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DogwoodDialogueSettings.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;
class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODDIALOGUE_API UDogwoodDialogueSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DrinkBloodSequenceTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkRtpc> VampireHungerFearIntensityRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> VampireHungerFearIntensityBuildupEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> VampireHungerFearIntensityBuildupStopEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> VampireHungerDrainNPCEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> VampireHungerEffectIntensityCurve;
    
    UDogwoodDialogueSettings();

};

