#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AudioSystemInterface.h"
#include "EAudioFadeState.h"
#include "AudioSystemImpl.generated.h"

class AActor;
class UAkAudioEvent;
class UAudioComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioSystemImpl : public UAudioSystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AmbientComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAudioFadeState, UAkAudioEvent*> AudioFadeEventCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LastDevelopmentVideoEvent;
    
public:
    UAudioSystemImpl();

    UFUNCTION(BlueprintCallable, Exec)
    static void ToggleAudioCharacterDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void SetRTPC(const FString& RTPCName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterDevelopmentVideoSounds(const FSoftObjectPath& VideoPath);
    
    UFUNCTION(BlueprintCallable)
    void LeaveCreditsState();
    
    UFUNCTION(BlueprintCallable)
    void ForceStopSettingsPreview();
    
    UFUNCTION(BlueprintCallable)
    void EnterCreditsState();
    
};

