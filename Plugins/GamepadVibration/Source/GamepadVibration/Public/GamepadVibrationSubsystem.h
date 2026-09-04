#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "EVibrationPreset.h"
#include "GamepadVibrationSubsystem.generated.h"

class UFeedbackBehavior;

UCLASS(Blueprintable)
class GAMEPADVIBRATION_API UGamepadVibrationSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVibrationPreset, UFeedbackBehavior*> Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UFeedbackBehavior*> DataTableAssets;
    
public:
    UGamepadVibrationSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopVibration(const UFeedbackBehavior* FeedbackBehavior);
    
    UFUNCTION(BlueprintCallable)
    void StopPresetVibration(const EVibrationPreset VibrationPreset);
    
    UFUNCTION(BlueprintCallable)
    void StopDataTableVibration(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    void StopAllVibrations();
    
    UFUNCTION(BlueprintCallable)
    void PlayVibration(const UFeedbackBehavior* FeedbackBehavior, bool bLooping, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable)
    void PlayPresetVibration(const EVibrationPreset VibrationPreset, bool bLooping, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable)
    void PlayDataTableVibration(const FName Name, bool bLooping, bool bPlayWhilePaused);
    
};

