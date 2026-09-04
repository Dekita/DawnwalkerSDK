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
    bool bProvideAltitudeAsGlobalRtpc;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerCharacterBase* OwnerCasted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAINPCSoundConfig* DefaultSoundConfig;
    
public:
    UAudioCharacterBaseComponent(const FObjectInitializer& ObjectInitializer);

};

