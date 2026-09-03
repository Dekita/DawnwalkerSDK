#pragma once
#include "CoreMinimal.h"
#include "EWeatherTypeIntensity.h"
#include "GameFramework/Actor.h"
#include "TimeOfDay.generated.h"

class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class USkyCreatorWeatherPreset;

UCLASS(Blueprintable)
class DAWNWALKER_API ATimeOfDay : public AActor {
    GENERATED_BODY()
public:
    ATimeOfDay(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetViewDistance(UExponentialHeightFogComponent* FogComponent, float ViewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetFogDistance(UExponentialHeightFogComponent* FogComponent, float FogNearFadeInDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudShadowStrength(UDirectionalLightComponent* DirectionalLightComponent, float Strength);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudShadowOnSurfaceStrength(UDirectionalLightComponent* DirectionalLightComponent, float Strength);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudShadowOnAtmosphereStrength(UDirectionalLightComponent* DirectionalLightComponent, float Strength);
    
    UFUNCTION(BlueprintCallable)
    void SetCastCloudsShadows(UDirectionalLightComponent* DirectionalLightComponent, bool bShadow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDayTimeInterpolationStartedFromSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDayTimeInterpolationFinishedFromSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDayTimeChangedFromSystem(float Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedWeatherPresetFromSystem(USkyCreatorWeatherPreset* Preset, float BlendTime, float FogMinHeight, float FogTargetHeight, bool bFromQuestNode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedWeatherFromSystem(float BlendTime, EWeatherTypeIntensity Clouds, EWeatherTypeIntensity Rain, EWeatherTypeIntensity Storm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCharacterDirectionalTemperatureOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCharacterDirectionalIntensityMultiplier();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCharacterDirectionalTemperatureOffsetChanged(float NewTemperatureOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCharacterDirectionalIntensityMultiplierChanged(float NewIntensity);
    
};

