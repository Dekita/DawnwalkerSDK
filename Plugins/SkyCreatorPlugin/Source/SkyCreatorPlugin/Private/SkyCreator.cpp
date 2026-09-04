#include "SkyCreator.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

ASkyCreator::ASkyCreator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->bIsCurveSupport = false;
    this->Root = (USceneComponent*)RootComponent;
    this->Billboard = NULL;
    this->Compass = NULL;
    this->SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("Sky Atmosphere Component"));
    this->VolumetricCloud = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("Volumetric Cloud Component"));
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Sky Light Component"));
    this->SunLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun Light Component"));
    this->MoonLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Moon Light Component"));
    this->ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Exponential Height Fog Component"));
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Post Process Component"));
    this->OcclusionCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Occlusion Capture Component"));
    this->OcclusionCaptureDistant = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Occlusion Capture Distant Component"));
    this->WeatherFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Weather FX Component"));
    this->MaterialFX = CreateDefaultSubobject<USceneComponent>(TEXT("Material FX Root Component"));
    this->RainRipplesFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Ripples FX Component"));
    this->RainDropsFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Drops FX Component"));
    this->RainStreaksFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Streaks FX Component"));
    this->RainSplatterFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Splatter FX Component"));
    this->SkySphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sky Sphere Component"));
    this->SkySphereMID = NULL;
    this->bRebelFogSettings = false;
    this->RebelFogDensity = 0.00f;
    this->RebelFogHeightFalloff = 0.06f;
    this->bUseEditorTimeOfDay = true;
    this->EditorTimeOfDay = 12.00f;
    this->bUseEditorWeatherSettings = true;
    this->EditorWeatherType = EditorWeather_WeatherPreset;
    this->EditorWeatherPreset = NULL;
    this->bIsEditorTickEnabled = true;
    this->TimeOfDay = 0.00f;
    this->SkySphereRadius = 1000.00f;
    this->bShowDebugVariables = false;
    this->bControlSunPosition = true;
    this->SunPositionType = SunPositionType_Simple;
    this->bControlMoonPosition = true;
    this->MoonPositionType = MoonPositionType_Simple;
    this->SunriseTime = 6.50f;
    this->SunsetTime = 19.50f;
    this->SunDawnOffsetTime = 1.50f;
    this->SunDuskOffsetTime = 1.50f;
    this->SunDawnTime = 0.00f;
    this->SunDuskTime = 0.00f;
    this->SunElevation = 55.00f;
    this->SunAzimuth = 270.00f;
    this->SunMinAngleAtDawnDusk = 8.00f;
    this->SunFadeInOutTime = 0.10f;
    this->MoonriseTime = 18.00f;
    this->MoonsetTime = 8.00f;
    this->MoonElevation = 45.00f;
    this->MoonAzimuth = 270.00f;
    this->MoonFadeInOutTime = 0.10f;
    this->Latitude = 51.51f;
    this->Longitude = -0.12f;
    this->TimeZone = 0.00f;
    this->bDaylightSavingTime = false;
    this->Year = 2022;
    this->Month = 5;
    this->Day = 10;
    this->bLightTransition = true;
    this->SunSurfaceBrightness = 1.00f;
    this->MoonSurfaceBrightness = 1.00f;
    this->SunCurrentElevation = 0.00f;
    this->SunCastShadowStartHour = 7.50f;
    this->SunCastShadowEndHour = 19.50f;
    this->TransitionStartSunAngle = -6.00f;
    this->TransitionMiddleSunAngle = 0.00f;
    this->TransitionEndSunAngle = 6.00f;
    this->NightIntensityTransitionStartSunAngle = 3.00f;
    this->NightIntensityTransitionEndSunAngle = 9.00f;
    this->SkyAtmosphereMobility = EComponentMobility::Movable;
    this->PositionMode = ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform;
    this->PlanetRadius = 6360.00f;
    this->AtmosphereHeight = 60.00f;
    this->AerialPespectiveViewDistanceScale = 1.00f;
    this->TraceSampleCountScale = 4.00f;
    this->GodRaysResolution = 32.00f;
    this->LayerBottomAltitude = 2.00f;
    this->LayerHeight = 8.00f;
    this->TracingStartMaxDistance = 350.00f;
    this->TracingMaxDistance = 50.00f;
    this->bPerSampleAtmosphericLightTransmittance = true;
    this->HighVolumetricCloudMaterial = NULL;
    this->LowVolumetricCloudMaterial = NULL;
    this->VolumetricCloudMID = NULL;
    this->VolumetricCloudDensitySampleMID = NULL;
    this->VolumetricCloudDensitySampleRT = NULL;
    this->bCinematicQuality = false;
    this->RenderMode = VolumetricCloudRenderTargetMode_Default;
    this->bHighQualityAerialPerspective = false;
    this->bCloudShadowSpatialFiltering = false;
    this->ViewSampleCountScale = 1.50f;
    this->ReflectionSampleCountScale = 0.50f;
    this->ShadowViewSampleCountScale = 0.50f;
    this->ShadowReflectionSampleCountScale = 0.25f;
    this->ShadowTracingDistance = 5.00f;
    this->TransmittanceThreshold = 0.01f;
    this->CloudMapScale = 50.00f;
    this->CoverageVariationMapScale = 50.00f;
    this->NoiseShapeResolution = VolumetricCloudNoiseShapeResolution_64;
    this->NoiseDetailResolution = VolumetricCloudNoiseDetailResolution_32;
    this->NoiseShapeScale = 6.00f;
    this->NoiseDetailScale = 0.75f;
    this->TurbulenceScale = 4.00f;
    this->BackgroundCloudsContrast = 3.00f;
    this->BackgroundCloudsReflectionScale = 0.50f;
    this->LerpRightThreshold = 0.97f;
    this->SkyLightMobility = EComponentMobility::Movable;
    this->bRealTimeCapture = true;
    this->bSkyLightCaptureTimeSlice = true;
    this->bLowerHemisphereIsSolidColor = true;
    this->bCloudAmbientOcclusion = true;
    this->CloudAmbientOcclusionExtent = 50.00f;
    this->CloudAmbientOcclusionMapResolutionScale = 1.00f;
    this->CloudAmbientOcclusionApertureScale = 0.05f;
    this->SunLightMobility = EComponentMobility::Movable;
    this->bSunConstantIntensity = true;
    this->SunIntensity = 10.00f;
    this->SunCurrentIntensity = 0.00f;
    this->bSunUseTemperature = false;
    this->SunDiskSize = 2.00f;
    this->bSunConstantAtmosphereDiskColorScale = false;
    this->bSunPerPixelAtmosphereTransmittance = false;
    this->SunCloudShadowType = VolumetricCloudShadowType_True;
    this->SunCloudShadowExtent = 35.00f;
    this->SunCloudShadowMapResolutionScale = 1.00f;
    this->SunCloudShadowRaySampleCountScale = 1.00f;
    this->MoonLightMobility = EComponentMobility::Movable;
    this->bMoonConstantIntensity = true;
    this->MoonIntensity = 0.04f;
    this->MoonCurrentIntensity = 0.00f;
    this->bMoonUseTemperature = false;
    this->MoonDiskSize = 2.00f;
    this->MoonRotation = 0.00f;
    this->MoonPhase = 0.00f;
    this->bMoonPhaseLightIntensityScale = false;
    this->MoonPhaseLightIntensityMinScale = 0.50f;
    this->MoonPhaseLightIntensityMaxScale = 1.00f;
    this->bMoonConstantAtmosphereDiskColorScale = false;
    this->bMoonPerPixelAtmosphereTransmittance = false;
    this->MoonCloudShadowType = VolumetricCloudShadowType_True;
    this->MoonCloudShadowExtent = 35.00f;
    this->MoonCloudShadowMapResolutionScale = 1.00f;
    this->MoonCloudShadowRaySampleCountScale = 1.00f;
    this->ExponentialHeightFogMobility = EComponentMobility::Movable;
    this->bEnableExponentialHeightFog = true;
    this->bEnableVolumetricFog = true;
    this->FogHeightOffset = 0.00f;
    this->SecondFogHeightOffset = 0.00f;
    this->VolumetricFogViewDistance = 6000.00f;
    this->StarMapRotationType = StarMapRotationType_FollowMoon;
    this->bEnableOcclusionCapture = true;
    this->bOcclusionCaptureRealtimeUpdate = false;
    this->bEnableOcclusionDebugView = false;
    this->OcclusionCaptureWidth = 10000.00f;
    this->OcclusionCaptureHeight = 50000.00f;
    this->OcclusionCaptureStepDistance = 500.00f;
    this->OcclusionBias = 5.00f;
    this->OcclusionBlurSamples = 12;
    this->OcclusionBlurDistance = 40.00f;
    this->OcclusionTransitionHardness = 0.80f;
    this->bEnableDistantOcclusionCapture = true;
    this->bDistantOcclusionCaptureRealtimeUpdate = false;
    this->DistantOcclusionCaptureWidth = 50000.00f;
    this->DistantOcclusionCaptureStepDistance = 2500.00f;
    this->OcclusionCaptureStepSize = 10.00f;
    this->bCapturedOcclusionThisFrame = false;
    this->DistantOcclusionCaptureStepSize = 50.00f;
    this->WeatherFXHeightCutoff = -100.00f;
    this->WeatherFXCutoffSoftness = 100.00f;
    this->PrecipitationSpawnMode = EPrecipitationSpawnMode_CPUGPU;
    this->PrecipitationSpawnRadiusCPU = 600.00f;
    this->PrecipitationSpawnRadiusGPU = 2000.00f;
    this->PrecipitationMaxViewDistance = 4000.00f;
    this->PrecipitationVerticalCheckDistance = 10000.00f;
    this->PrecipitationCollisionChannel = ECC_WorldStatic;
    this->RainSpawnRateMaxCPU = 4000.00f;
    this->RainSpawnRateMaxGPU = 100000.00f;
    this->RainDistanceScaleFactor = 2.00f;
    this->RainCameraMotionAlignmentScale = 0.60f;
    this->RainVelocityElongationScale = 2.50f;
    this->RainVelocityFade = 1.00f;
    this->RainIndexOfRefraction = 1.00f;
    this->RainDepthFadeDistance = 50.00f;
    this->RainCameraFadeDistance = 100.00f;
    this->RainCameraFadeOffset = 50.00f;
    this->RainSplashSpawnRateMaxCPU = 2000.00f;
    this->RainSplashSpawnRateMaxGPU = 100000.00f;
    this->RainSplashIndexOfRefraction = 1.00f;
    this->EnableRainSplashVolumetric = true;
    this->RainSplashDepthFadeDistance = 5.00f;
    this->RainSplashCameraFadeDistance = 50.00f;
    this->RainSplashCameraFadeOffset = 10.00f;
    this->SnowSpawnRateMaxCPU = 1000.00f;
    this->SnowSpawnRateMaxGPU = 100000.00f;
    this->SnowDistanceScaleFactor = 2.00f;
    this->SnowCameraMotionAlignmentScale = 0.40f;
    this->SnowVelocityElongationScale = 1.50f;
    this->SnowDepthFadeDistance = 50.00f;
    this->SnowCameraFadeDistance = 50.00f;
    this->SnowCameraFadeOffset = 0.00f;
    this->LightningParameters.AddDefaulted(4);
    this->CurrentLightningInterval = 0.00f;
    this->LightningCurrentIndex = 0;
    this->bSampleCloudDensity = true;
    this->LightningMaxSamples = 4;
    this->LightningSpawnInnerRadius = 10.00f;
    this->LightningSpawnOuterRadius = 25.00f;
    this->LightningRandomDegreeInConeMax = 45.00f;
    this->LightningBoltEmissiveScale = 10.00f;
    this->LightningFlashFadeUpdateRate = 60.00f;
    this->LightningFlashFadeDelta = 0.00f;
    this->LightningFlashEmissiveScale = 100.00f;
    this->LightningFlashEmissiveReflectionScale = 0.10f;
    this->LightningFlashRadiusScale = 1.00f;
    this->LightningFlashFadeSpeed = 0.50f;
    this->RainbowDistance = 20000.00f;
    this->RainbowDepthFadeDistance = 50000.00f;
    this->VolumetricWindScale = 800.00f;
    this->VolumetricWindFadeHardness = 0.50f;
    this->VolumetricWindViewDistance = 5000.00f;
    this->VolumetricMistScale = 2000.00f;
    this->VolumetricMistFadeHardness = 0.50f;
    this->VolumetricMistViewDistance = 5000.00f;
    this->MaterialFXHeightCutoff = -100.00f;
    this->MaterialFXCutoffSoftness = 100.00f;
    this->bPauseFXSimulations = false;
    this->WetnessSlopeAngle = 0.00f;
    this->WetnessSlopeSmoothness = 0.50f;
    this->PuddlesMaskScale = 2000.00f;
    this->PuddlesRoughness = 0.02f;
    this->PuddlesSlopeAngle = 0.75f;
    this->PuddlesSlopeSmoothness = 0.50f;
    this->RainSplatterUpdateRate = 30.00f;
    this->RainSplatterScale = 200.00f;
    this->RainSplatterSlopeAngle = 0.75f;
    this->RainSplatterSlopeSmoothness = 0.50f;
    this->RainSplatterDeltaAccumulator = 0.00f;
    this->bOldRainSplatterAmountZero = true;
    this->RainSplatterInitCountdown = 3;
    this->RainRipplesUpdateRate = 30.00f;
    this->RainRipplesScale = 150.00f;
    this->WindRipplesScale = 100.00f;
    this->RainRipplesDeltaAccumulator = 0.01f;
    this->bOldRainRipplesAmountZero = true;
    this->RainRipplesInitCountdown = 3;
    this->RainDropsUpdateRate = 30.00f;
    this->RainDropsScale = 50.00f;
    this->RainDropsSlopeAngle = -0.50f;
    this->RainDropsSlopeSmoothness = 0.20f;
    this->RainDropsDeltaAccumulator = 0.02f;
    this->bOldRainDropsAmountZero = true;
    this->RainDropsInitCountdown = 3;
    this->RainStreaksUpdateRate = 30.00f;
    this->RainStreaksScale = 100.00f;
    this->RainStreaksSlopeAngle = -0.60f;
    this->RainStreaksSlopeSmoothness = 0.25f;
    this->RainStreaksDeltaAccumulator = 0.02f;
    this->bOldRainStreaksAmountZero = true;
    this->RainStreaksInitCountdown = 3;
    this->SnowMaskScale = 500.00f;
    this->SnowScale = 500.00f;
    this->SnowRoughness = 0.40f;
    this->SnowSparklesScale = 25.00f;
    this->SnowSparklesRoughness = 0.25f;
    this->SnowSlopeAngle = 0.50f;
    this->SnowSlopeSmoothness = 0.00f;
    this->bEnableWind = true;
    this->bOverride_EditorCloudWindDirection = false;
    this->bOverride_EditorCloudWindSpeed = false;
    this->bOverride_EditorCloudWindSkewAmount = false;
    this->bOverride_EditorCloudNoiseShapeWindDirection = false;
    this->bOverride_EditorCloudNoiseShapeWindSpeedHorizontal = false;
    this->bOverride_EditorCloudNoiseDetailWindSpeedVertical = false;
    this->bOverride_EditorWindDirection = false;
    this->bOverride_EditorWindSpeed = false;
    this->EditorCloudWindDirection = 0.00f;
    this->EditorCloudWindSpeed = 0.00f;
    this->EditorCloudWindSkewAmount = 0.25f;
    this->EditorCloudNoiseShapeWindDirection = 0.00f;
    this->EditorCloudNoiseShapeWindSpeedHorizontal = 0.00f;
    this->EditorCloudNoiseDetailWindSpeedVertical = 2.00f;
    this->EditorWindDirection = 0.00f;
    this->EditorWindSpeed = 0.00f;
    this->CloudWindSkewForce = 0.00f;
    this->bUseExposureSettings = true;
    this->bExtendDefaultLuminanceRange = true;
    this->PostProcessPriority = 100.00f;
    this->ExposureMethod = AEM_Histogram;
    this->ExposureBiasCurve = NULL;
    this->ExposureMeterMask = NULL;
    this->ExposureMinBrightness = 0.03f;
    this->ExposureMaxBrightness = 20.00f;
    this->ExposureMinEV100 = -6.00f;
    this->ExposureMaxEV100 = 20.00f;
    this->ExposureSpeedUp = 4.00f;
    this->ExposureSpeedDown = 4.00f;
    this->ExposureLowPercent = 50.00f;
    this->ExposureHighPercent = 90.00f;
    this->ExposureHistogramLogMin = -16.00f;
    this->ExposureHistogramLogMax = 4.00f;
    this->ExposureHistogramMinEV100 = -12.00f;
    this->ExposureHistogramMaxEV100 = 20.00f;
    this->ExponentialHeightFog->SetupAttachment(RootComponent);
    this->MaterialFX->SetupAttachment(RootComponent);
    this->MoonLight->SetupAttachment(RootComponent);
    this->OcclusionCapture->SetupAttachment(RootComponent);
    this->OcclusionCaptureDistant->SetupAttachment(RootComponent);
    this->PostProcess->SetupAttachment(RootComponent);
    this->RainDropsFX->SetupAttachment(MaterialFX);
    this->RainRipplesFX->SetupAttachment(MaterialFX);
    this->RainSplatterFX->SetupAttachment(MaterialFX);
    this->RainStreaksFX->SetupAttachment(MaterialFX);
    this->SkyAtmosphere->SetupAttachment(RootComponent);
    this->SkyLight->SetupAttachment(RootComponent);
    this->SkySphere->SetupAttachment(RootComponent);
    this->SunLight->SetupAttachment(RootComponent);
    this->VolumetricCloud->SetupAttachment(RootComponent);
    this->WeatherFX->SetupAttachment(RootComponent);
}

void ASkyCreator::UpdateSettingsSequencer() {
}

void ASkyCreator::SpawnLightningStrike(FVector LightningPosition) {
}

void ASkyCreator::SetYear(int32 NewValue) {
}

void ASkyCreator::SetWindSettings(FSkyCreatorWindSettings InWindSettings) {
}

void ASkyCreator::SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings) {
}

void ASkyCreator::SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings) {
}

void ASkyCreator::SetWeatherPostProcessFromCurves() {
}

void ASkyCreator::SetWeatherFXSettingsFromCurve() {
}

void ASkyCreator::SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings) {
}

void ASkyCreator::SetVolumetricCloudSettingsFromCurve() {
}

void ASkyCreator::SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings) {
}

void ASkyCreator::SetTimeZone(float NewValue) {
}

void ASkyCreator::SetTime(float InTime) {
}

void ASkyCreator::SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth) {
}

void ASkyCreator::SetSunsetTime(float NewValue) {
}

void ASkyCreator::SetSunriseTime(float NewValue) {
}

void ASkyCreator::SetSunMinAngleAtDawnDusk(float NewValue) {
}

void ASkyCreator::SetSunLightSettingsFromCurve() {
}

void ASkyCreator::SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings) {
}

void ASkyCreator::SetSunIntensity(float NewValue) {
}

void ASkyCreator::SetSunElevation(float NewValue) {
}

void ASkyCreator::SetSunDuskOffsetTime(float NewValue) {
}

void ASkyCreator::SetSunDiskSize(float NewValue) {
}

void ASkyCreator::SetSunDawnOffsetTime(float NewValue) {
}

void ASkyCreator::SetSunAzimuth(float NewValue) {
}

void ASkyCreator::SetSunAtmosphereDiskColorScale(FLinearColor NewValue) {
}

void ASkyCreator::SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings) {
}

void ASkyCreator::SetStarMapAdditionalRotation(FVector NewValue) {
}

void ASkyCreator::SetSkyLightSettingsFromCurve() {
}

void ASkyCreator::SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings) {
}

void ASkyCreator::SetSkyAtmosphereSettingsFromCurve() {
}

void ASkyCreator::SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings) {
}

void ASkyCreator::SetSettingsFromCurves() {
}

void ASkyCreator::SetRebelFog() {
}

void ASkyCreator::SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int32 InYear, const int32 InMonth, const int32 InDay) {
}

void ASkyCreator::SetPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettings) {
}

void ASkyCreator::SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth) {
}

void ASkyCreator::SetMoonsetTime(float NewValue) {
}

void ASkyCreator::SetMoonRotation(float NewValue) {
}

void ASkyCreator::SetMoonriseTime(float NewValue) {
}

void ASkyCreator::SetMoonPhase(float NewValue) {
}

void ASkyCreator::SetMoonLightSettingsFromCurve() {
}

void ASkyCreator::SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings) {
}

void ASkyCreator::SetMoonIntensity(float NewValue) {
}

void ASkyCreator::SetMoonElevation(float NewValue) {
}

void ASkyCreator::SetMoonDiskSize(float NewValue) {
}

void ASkyCreator::SetMoonAzimuth(float NewValue) {
}

void ASkyCreator::SetMoonAtmosphereDiskColorScale(FLinearColor NewValue) {
}

void ASkyCreator::SetMonth(int32 NewValue) {
}

void ASkyCreator::SetMaterialFXSettingsFromCurve() {
}

void ASkyCreator::SetMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettings) {
}

void ASkyCreator::SetLongitude(float NewValue) {
}

void ASkyCreator::SetLayerHeight(float NewValue) {
}

void ASkyCreator::SetLayerBottomAltitude(float NewValue) {
}

void ASkyCreator::SetLatitude(float NewValue) {
}

void ASkyCreator::SetExponentialHeightFogSettingsFromCurve() {
}

void ASkyCreator::SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings) {
}

void ASkyCreator::SetEditorWeatherSettings(FSkyCreatorWeatherSettings NewValue) {
}

void ASkyCreator::SetEditorWeatherPreset(USkyCreatorWeatherPreset* NewValue) {
}

void ASkyCreator::SetEditorTimeOfDay(float NewValue) {
}

void ASkyCreator::SetDay(int32 NewValue) {
}

void ASkyCreator::SetCloudMapOffset(FVector2D NewValue) {
}

void ASkyCreator::SetbDaylightSavingTime(bool NewValue) {
}

void ASkyCreator::SetBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings) {
}

void ASkyCreator::RestoreFogSettings(FSkyCreatorInteriorFogSettings FogSettings) {
}

void ASkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration) {
}

void ASkyCreator::OverrideInteriorFogSettings(FSkyCreatorInteriorFogSettings InteriorFogSettings) {
}

void ASkyCreator::OnRep_UpdateWeather() {
}

void ASkyCreator::OnRep_UpdateTime() {
}

void ASkyCreator::LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void ASkyCreator::LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void ASkyCreator::LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha) {
}

void ASkyCreator::LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha) {
}

void ASkyCreator::LerpWeatherFXSettingsFromCurve(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha) {
}

void ASkyCreator::LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha) {
}

void ASkyCreator::LerpVolumetricCloudSettingsFromCurve(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha) {
}

void ASkyCreator::LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha) {
}

void ASkyCreator::LerpSunLightSettingsFromCurve(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha) {
}

void ASkyCreator::LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha) {
}

void ASkyCreator::LerpSkyLightSettingsFromCurve(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpSkyAtmosphereSettingsFromCurve(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha) {
}

void ASkyCreator::LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha) {
}

void ASkyCreator::LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha) {
}

void ASkyCreator::LerpPostProcessSettingsFromCurve(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha) {
}

void ASkyCreator::LerpPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha) {
}

void ASkyCreator::LerpMoonLightSettingsFromCurve(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpMaterialFXSettingsFromSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettingsA, FSkyCreatorMaterialFXSettings InMaterialFXSettingsB, float Alpha) {
}

void ASkyCreator::LerpMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettingsA, FSkyCreatorMaterialFXSettings InMaterialFXSettingsB, float Alpha) {
}

void ASkyCreator::LerpExponentialHeightFogSettingsFromCurve(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha) {
}

void ASkyCreator::LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha) {
}

void ASkyCreator::LerpBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha) {
}

FSkyCreatorWindSettings ASkyCreator::GetWindSettings() const {
    return FSkyCreatorWindSettings{};
}

FSkyCreatorWeatherSettings ASkyCreator::GetWeatherSettings() const {
    return FSkyCreatorWeatherSettings{};
}

FSkyCreatorMaterialFXSettings ASkyCreator::GetWeatherMaterialFXSettings() const {
    return FSkyCreatorMaterialFXSettings{};
}

FSkyCreatorWeatherFXSettings ASkyCreator::GetWeatherFXSettings() const {
    return FSkyCreatorWeatherFXSettings{};
}

FSkyCreatorVolumetricCloudSettings ASkyCreator::GetVolumetricCloudSettings() const {
    return FSkyCreatorVolumetricCloudSettings{};
}

float ASkyCreator::GetTime() const {
    return 0.0f;
}

FRotator ASkyCreator::GetSunPosition(float Time) {
    return FRotator{};
}

FSkyCreatorSunLightSettings ASkyCreator::GetSunLightSettings() const {
    return FSkyCreatorSunLightSettings{};
}

FSkyCreatorStarMapSettings ASkyCreator::GetStarMapSettings() const {
    return FSkyCreatorStarMapSettings{};
}

FRotator ASkyCreator::GetStarMapRotation() const {
    return FRotator{};
}

FSkyCreatorSkyLightSettings ASkyCreator::GetSkyLightSettings() const {
    return FSkyCreatorSkyLightSettings{};
}

FSkyCreatorSkyAtmosphereSettings ASkyCreator::GetSkyAtmosphereSettings() const {
    return FSkyCreatorSkyAtmosphereSettings{};
}

FSkyCreatorPostProcessSettings ASkyCreator::GetPostProcessSettings() const {
    return FSkyCreatorPostProcessSettings{};
}

FRotator ASkyCreator::GetMoonPosition(float Time) {
    return FRotator{};
}

float ASkyCreator::GetMoonPhase() const {
    return 0.0f;
}

FSkyCreatorMoonLightSettings ASkyCreator::GetMoonLightSettings() const {
    return FSkyCreatorMoonLightSettings{};
}

FVector ASkyCreator::GetLastLightningPosition() {
    return FVector{};
}

FSkyCreatorExponentialHeightFogSettings ASkyCreator::GetExponentialHeightFogSettings() const {
    return FSkyCreatorExponentialHeightFogSettings{};
}

FSkyCreatorInteriorFogSettings ASkyCreator::GetCurrentFogSettings() {
    return FSkyCreatorInteriorFogSettings{};
}

float ASkyCreator::GetCloudDensityAtPosition(FVector position) {
    return 0.0f;
}

FSkyCreatorBackgroundCloudSettings ASkyCreator::GetBackgroundCloudSettings() const {
    return FSkyCreatorBackgroundCloudSettings{};
}

bool ASkyCreator::FindLightningPosition(FVector position, FVector& OutPosition) {
    return false;
}

void ASkyCreator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkyCreator, TimeOfDay);
    DOREPLIFETIME(ASkyCreator, WeatherSettings);
}


