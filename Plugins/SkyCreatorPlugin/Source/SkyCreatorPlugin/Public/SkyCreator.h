#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/Scene.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkyAtmosphereComponent.h"
#include "CelestialPositionData.h"
#include "EPrecipitationSpawnMode.h"
#include "ESkyCreatorEditorWeatherType.h"
#include "ESkyCreatorMoonPositionType.h"
#include "ESkyCreatorStarMapRotationType.h"
#include "ESkyCreatorSunPositionType.h"
#include "EVolumetricCloudNoiseDetailResolution.h"
#include "EVolumetricCloudNoiseShapeResolution.h"
#include "EVolumetricCloudRenderTargetMode.h"
#include "EVolumetricCloudShadowType.h"
#include "OnLightningStrikeDelegate.h"
#include "SkyCreatorBackgroundCloudSettings.h"
#include "SkyCreatorExponentialHeightFogSettings.h"
#include "SkyCreatorInteriorFogSettings.h"
#include "SkyCreatorLightningParameters.h"
#include "SkyCreatorMaterialFXSettings.h"
#include "SkyCreatorMoonLightSettings.h"
#include "SkyCreatorPostProcessSettings.h"
#include "SkyCreatorSkyAtmosphereSettings.h"
#include "SkyCreatorSkyLightSettings.h"
#include "SkyCreatorStarMapSettings.h"
#include "SkyCreatorSunLightSettings.h"
#include "SkyCreatorVolumetricCloudSettings.h"
#include "SkyCreatorWeatherFXSettings.h"
#include "SkyCreatorWeatherSettings.h"
#include "SkyCreatorWindSettings.h"
#include "SkyCreator.generated.h"

class UBillboardComponent;
class UCurveFloat;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UNiagaraComponent;
class UNiagaraSystem;
class UPostProcessComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USkyAtmosphereComponent;
class USkyCreatorWeatherPreset;
class USkyLightComponent;
class UStaticMeshComponent;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;
class UVolumetricCloudComponent;

UCLASS(Blueprintable)
class SKYCREATORPLUGIN_API ASkyCreator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurveSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Compass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVolumetricCloudComponent* VolumetricCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* SunLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* MoonLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* OcclusionCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* OcclusionCaptureDistant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WeatherFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MaterialFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RainRipplesFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RainDropsFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RainStreaksFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RainSplatterFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SkySphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SkySphereMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SkySphereMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebelFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebelFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebelFogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEditorTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEditorWeatherSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkyCreatorEditorWeatherType> EditorWeatherType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    USkyCreatorWeatherPreset* EditorWeatherPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorWeatherSettings EditorWeatherSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditorTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateTime, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateWeather, meta=(AllowPrivateAccess=true))
    FSkyCreatorWeatherSettings WeatherSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CommonMPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkySphereRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlSunPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkyCreatorSunPositionType> SunPositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCelestialPositionData SunPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlMoonPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkyCreatorMoonPositionType> MoonPositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCelestialPositionData MoonPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunriseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunDawnOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunDuskOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunDawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunDuskTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunAzimuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunMinAngleAtDawnDusk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunFadeInOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonriseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonAzimuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonFadeInOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Latitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Longitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bDaylightSavingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLightTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunSurfaceBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonSurfaceBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCurrentElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCastShadowStartHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCastShadowEndHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionStartSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionMiddleSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionEndSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightIntensityTransitionStartSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightIntensityTransitionEndSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SkyAtmosphereMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkyAtmosphereTransformMode PositionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlanetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AtmosphereHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialPespectiveViewDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlanetTopPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GodRaysResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LayerBottomAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LayerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracingStartMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerSampleAtmosphericLightTransmittance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* VolumetricCloudsMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LayerBottomAltitudePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LayerTopAltitudePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CurrentVolumetricCloudMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HighVolumetricCloudMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LowVolumetricCloudMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VolumetricCloudMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* VolumetricCloudDensitySampleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VolumetricCloudDensitySampleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* VolumetricCloudDensitySampleRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCinematicQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVolumetricCloudRenderTargetMode> RenderMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighQualityAerialPerspective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloudShadowSpatialFiltering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowViewSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowTracingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransmittanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D CloudMapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverageVariationMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVolumetricCloudNoiseShapeResolution> NoiseShapeResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVolumetricCloudNoiseDetailResolution> NoiseDetailResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseShapeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseDetailScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurbulenceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsReflectionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpRightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SkyLightMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRealTimeCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkyLightCaptureTimeSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowerHemisphereIsSolidColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloudAmbientOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudAmbientOcclusionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudAmbientOcclusionMapResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudAmbientOcclusionApertureScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SunLightMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunConstantIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCurrentIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunDiskSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor SunAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVolumetricCloudShadowType> SunCloudShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCloudShadowExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCloudShadowMapResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> MoonLightMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonConstantIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCurrentIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonDiskSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonPhaseLightIntensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonPhaseLightIntensityMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonPhaseLightIntensityMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor MoonAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVolumetricCloudShadowType> MoonCloudShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCloudShadowExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCloudShadowMapResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> ExponentialHeightFogMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVolumetricFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondFogHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricFogViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StarMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkyCreatorStarMapRotationType> StarMapRotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector StarMapAdditionalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOcclusionCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOcclusionCaptureRealtimeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOcclusionDebugView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* OcclusionRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureStepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OcclusionBlurSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionBlurDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionTransitionHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDistantOcclusionCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistantOcclusionCaptureRealtimeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DistantOcclusionRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistantOcclusionCaptureWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistantOcclusionCaptureStepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OcclusionDebugPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLocationSnapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector OcclusionCurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DistantCameraLocationSnapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DistantOcclusionCurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCapturedOcclusionThisFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistantOcclusionCaptureStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherFXHeightCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherFXCutoffSoftness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPrecipitationSpawnMode> PrecipitationSpawnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationSpawnRadiusCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationSpawnRadiusGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationMaxViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationVerticalCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> PrecipitationCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSpawnRateMaxCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainCameraMotionAlignmentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainVelocityElongationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainVelocityFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainIndexOfRefraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDepthFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainCameraFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainCameraFadeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashSpawnRateMaxCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashIndexOfRefraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRainSplashVolumetric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashDepthFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashCameraFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashCameraFadeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSpawnRateMaxCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowCameraMotionAlignmentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowVelocityElongationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowDepthFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowCameraFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowCameraFadeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LightningsParametersRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSkyCreatorLightningParameters> LightningParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLightningInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LightningStrikeSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastLightningPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LightningAvailablePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightningCurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleCloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightningMaxSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningSpawnInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningSpawnOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningRandomDegreeInConeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningBoltEmissiveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashFadeUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashFadeDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashEmissiveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashEmissiveReflectionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainbowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainbowDepthFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricWindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricWindFadeHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricWindViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricMistScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricMistFadeHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricMistViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialFXHeightCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialFXCutoffSoftness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseFXSimulations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetnessSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetnessSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesMaskScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplatterUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplatterScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplatterSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplatterSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplatterDeltaAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOldRainSplatterAmountZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RainSplatterInitCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainRipplesUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainRipplesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindRipplesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainRipplesDeltaAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOldRainRipplesAmountZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RainRipplesInitCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDropsUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDropsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDropsSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDropsSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDropsDeltaAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOldRainDropsAmountZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RainDropsInitCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainStreaksUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainStreaksScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainStreaksSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainStreaksSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainStreaksDeltaAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOldRainStreaksAmountZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RainStreaksInitCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowMaskScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSparklesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSparklesRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorCloudWindDirection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorCloudWindSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorCloudWindSkewAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorCloudNoiseShapeWindDirection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorCloudNoiseShapeWindSpeedHorizontal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorCloudNoiseDetailWindSpeedVertical: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorWindDirection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EditorWindSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorCloudWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorCloudWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorCloudWindSkewAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorCloudNoiseShapeWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorCloudNoiseShapeWindSpeedHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorCloudNoiseDetailWindSpeedVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CloudWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CloudWindSkewDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CloudWindSkewForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CloudNoiseShapeWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CloudNoiseDetailWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PrecipitationWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VolumetricWindWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VolumetricMistWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExposureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendDefaultLuminanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoExposureMethod> ExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ExposureMeterMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMinEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMaxEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureSpeedDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureLowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHighPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramLogMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramMinEV100;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramMaxEV100;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLightningStrike OnLightningStrike;
    
    ASkyCreator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSettingsSequencer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnLightningStrike(FVector LightningPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetYear(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWindSettings(FSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherPostProcessFromCurves();
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherFXSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricCloudSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth);
    
    UFUNCTION(BlueprintCallable)
    void SetSunsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunriseTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunMinAngleAtDawnDusk(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunLightSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSunIntensity(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunElevation(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunDuskOffsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunDiskSize(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunDawnOffsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunAzimuth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunAtmosphereDiskColorScale(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetStarMapAdditionalRotation(FVector NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyAtmosphereSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingsFromCurves();
    
    UFUNCTION(BlueprintCallable)
    void SetRebelFog();
    
    UFUNCTION(BlueprintCallable)
    void SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int32 InYear, const int32 InMonth, const int32 InDay);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonRotation(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonriseTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonPhase(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonLightSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonIntensity(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonElevation(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonDiskSize(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonAzimuth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonAtmosphereDiskColorScale(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMonth(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialFXSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetLongitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerHeight(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerBottomAltitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLatitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetExponentialHeightFogSettingsFromCurve();
    
    UFUNCTION(BlueprintCallable)
    void SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorWeatherSettings(FSkyCreatorWeatherSettings NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorWeatherPreset(USkyCreatorWeatherPreset* NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorTimeOfDay(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDay(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudMapOffset(FVector2D NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetbDaylightSavingTime(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings);
    
    UFUNCTION(BlueprintCallable)
    void RestoreFogSettings(FSkyCreatorInteriorFogSettings FogSettings);
    
    UFUNCTION(BlueprintCallable)
    void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
    
    UFUNCTION(BlueprintCallable)
    void OverrideInteriorFogSettings(FSkyCreatorInteriorFogSettings InteriorFogSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateWeather();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherFXSettingsFromCurve(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpVolumetricCloudSettingsFromCurve(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSunLightSettingsFromCurve(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyLightSettingsFromCurve(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyAtmosphereSettingsFromCurve(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpPostProcessSettingsFromCurve(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpMoonLightSettingsFromCurve(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpMaterialFXSettingsFromSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettingsA, FSkyCreatorMaterialFXSettings InMaterialFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettingsA, FSkyCreatorMaterialFXSettings InMaterialFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpExponentialHeightFogSettingsFromCurve(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorWindSettings GetWindSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorWeatherSettings GetWeatherSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorMaterialFXSettings GetWeatherMaterialFXSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorWeatherFXSettings GetWeatherFXSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetSunPosition(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorSunLightSettings GetSunLightSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorStarMapSettings GetStarMapSettings() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetStarMapRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorSkyLightSettings GetSkyLightSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorPostProcessSettings GetPostProcessSettings() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetMoonPosition(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoonPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorMoonLightSettings GetMoonLightSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastLightningPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings() const;
    
    UFUNCTION(BlueprintCallable)
    FSkyCreatorInteriorFogSettings GetCurrentFogSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCloudDensityAtPosition(FVector position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindLightningPosition(FVector position, FVector& OutPosition);
    
};

