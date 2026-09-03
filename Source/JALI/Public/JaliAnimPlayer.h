#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JaliAnimPlayerPausedDelegate.h"
#include "JaliAnimPlayerReadyDelegateDelegate.h"
#include "JaliAnimPlayerResumedDelegate.h"
#include "JaliRuntimeAnimSettings.h"
#include "JaliAnimPlayer.generated.h"

class UAudioComponent;
class UCurveTable;
class USoundWave;

UCLASS(Blueprintable)
class JALI_API UJaliAnimPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJaliAnimPlayerResumed AnimationResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJaliAnimPlayerPaused AnimationPaused;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJaliRuntimeAnimSettings CurrentAnimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* CurrentAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UJaliAnimPlayer();

    UFUNCTION(BlueprintCallable)
    void SetTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldHoldPose(bool bHoldPose);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSound(USoundWave* InSoundWave);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAnimation(UCurveTable* InCurveTable);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    float GetTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldHoldPose();
    
    UFUNCTION(BlueprintCallable)
    void GenerateAnimCurves(FJaliRuntimeAnimSettings AnimSettings, const FJaliAnimPlayerReadyDelegate& ReadyDelegate);
    
};

