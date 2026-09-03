#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DogwoodAudioSettings.generated.h"

class UAkAudioEvent;
class UAudioMusicDataAsset;
class UDogwoodAudioSettings;
class UMediaSource;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODAUDIO_API UDogwoodAudioSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAudioMusicDataAsset> AudioMusicDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMediaSource>, TSoftObjectPtr<UAkAudioEvent>> CharacterDevelopmentVideoSounds;
    
    UDogwoodAudioSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDogwoodAudioSettings* Get();
    
};

