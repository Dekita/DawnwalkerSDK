#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "UObject/NoExportTypes.h"
#include "EObstructionComplexity.h"
#include "EReverbType.h"
#include "RWAudioComponent.generated.h"

class UAkAudioEvent;
class UAkRoomComponent;
class UAkRtpc;
class UAkSwitchValue;
class UAkTrigger;
class URWAudioComponentSettingsPreset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEEXTENSIONS_API URWAudioComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeVirtualised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObstructionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObstructionComplexity ObstructionComplexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReverbType ReverbType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DopplerScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkRoomComponent> CurrentRoom;
    
public:
    URWAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSound(const int32 PlayingID, const int32 FadeTimeInMs);
    
    UFUNCTION(BlueprintCallable)
    void StopAll(const int32 FadeTimeInMs);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTransformOff();
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTransform(const FTransform& OverrideTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioSwitch(const UAkSwitchValue* SwitchValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioRTPC(const UAkRtpc* RTPCValue, const float Value, const int32 InterpolationTimeInMs);
    
    UFUNCTION(BlueprintCallable)
    void SeekInSound(const int32 PlayingID, const float PercentPosition);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSound(const int32 PlayingID, const int32 TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    void ResumeAll(const int32 TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    void PostAudioTrigger(const UAkTrigger* TriggerValue);
    
    UFUNCTION(BlueprintCallable)
    int32 PostAudioEvent(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable)
    void PauseSound(const int32 PlayingID, const int32 TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    void PauseAll(const int32 TransitionDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetEmitterTransform();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAudioComponentSettingsPreset(const URWAudioComponentSettingsPreset* SettingsPreset);
    
};

