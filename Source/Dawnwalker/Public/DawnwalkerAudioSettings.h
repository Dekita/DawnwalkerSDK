#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EAudioFadeState.h"
#include "DawnwalkerAudioSettings.generated.h"

class UAkAudioEvent;
class UAudioAmbientMasksDataAsset;
class UAudioCharacterAnimationNotifyDataAsset;
class UAudioCharacterBaseDataAsset;
class UAudioCombatHitDataAsset;
class UAudioWeaponDataAsset;
class UDawnwalkerAudioSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DAWNWALKER_API UDawnwalkerAudioSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAudioCombatHitDataAsset> CombatHitDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAudioCharacterAnimationNotifyDataAsset> CharacterAnimationNotifyDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAudioCharacterBaseDataAsset> AudioCharacterBaseDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAudioWeaponDataAsset> AudioWeaponDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAudioAmbientMasksDataAsset> AmbientMasksDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> DefaultUnpauseStateEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAudioFadeState, TSoftObjectPtr<UAkAudioEvent>> AudioFadeEvents;
    
    UDawnwalkerAudioSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDawnwalkerAudioSettings* Get();
    
};

