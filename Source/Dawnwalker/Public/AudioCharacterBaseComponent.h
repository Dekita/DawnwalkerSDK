#pragma once
#include "CoreMinimal.h"
#include "AudioCharacterCommonBaseComponent.h"
#include "AudioCharacterBaseComponent.generated.h"

class ADawnwalkerCharacterBase;
class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class URebelAINPCSoundConfig;
class URebelAIStub;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioCharacterBaseComponent : public UAudioCharacterCommonBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkRtpc> CharacterSpeedRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkRtpc> CharacterAltitudeRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProvideAltitudeAsGlobalRtpc;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CharacterSpeedRTPCPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CharacterAltitudeRTPCPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* NPCVoiceSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerCharacterBase* OwnerCasted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAINPCSoundConfig* DefaultSoundConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> CachedNPCAISoundConfigEvents;
    
public:
    UAudioCharacterBaseComponent(const FObjectInitializer& ObjectInitializer);

};

