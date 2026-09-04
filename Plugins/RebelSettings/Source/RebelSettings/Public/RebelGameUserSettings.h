#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERebelQuality.h"
#include "GameFramework/GameUserSettings.h"
#include "GameFramework/GameUserSettings.h"
#include "ERebelGameDifficulty.h"
#include "ERebelLanguage.h"
#include "ERebelLanguageType.h"
#include "ERebelSetting.h"
#include "ERebelSettingChangeMode.h"
#include "ERebelSettingGroup.h"
#include "ERebelUpscalerType.h"
#include "RebelCVarOverrideData.h"
#include "RebelGameUserSettings.generated.h"

class URebelFramegenSettings;
class URebelGameUserSettings;
class URebelSettingsSave;

UCLASS(Blueprintable)
class REBELSETTINGS_API URebelGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSettingRequiringEngineRestartConfirmed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVideoModeChanged, FIntPoint, InVideoResolution, TEnumAsByte<EWindowMode::Type>, InWindowMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVideoBenchmarkComplete, ERebelQuality, InBenchedQuality);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSupportedResolutionsChanged, TArray<FIntPoint>, InNewSupportedResolutions);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingConfirmed, ERebelSetting, ConfirmedSetting);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSettingChanged, ERebelSetting, InSetting, float, InVal, ERebelSettingChangeMode, InSettingChangeMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPreCultureChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPostCultureChanged, ERebelLanguage, InTextLanguage, ERebelLanguage, InAudioLanguage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameUserSettingsInitialized);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCinematicModeStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCinematicModeFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllSettingsConfirmed);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> DefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> DefaultSettingsXSX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> DefaultSettingsPS5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> CurrentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> UnconfirmedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> OverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> UnconfirmedOverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FRebelCVarOverrideData> OverrideCVars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PCVideoPresetLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PCVideoPresetMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PCVideoPresetHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PCVideoPresetEpic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> XSXVideoPresetQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> XSXVideoPresetBalanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> XSXVideoPresetPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PS5VideoPresetQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PS5VideoPresetBalanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PS5VideoPresetPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PS5ProVideoPresetQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PS5ProVideoPresetBalanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> PS5ProVideoPresetPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> StoryDifficultyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> NormalDifficultyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> ImmersiveDifficultyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, float> NightmareDifficultyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasInitFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelSettingsSave* SettingsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SettingsSaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFramegenSettings* FramegenSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSetting, FString> ScalabilityDefinitions;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameUserSettingsInitialized OnGameUserSettingsInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreCultureChanged OnPreCultureChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostCultureChanged OnPostCultureChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicModeStarted OnCinematicModeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicModeFinished OnCinematicModeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSupportedResolutionsChanged OnSupportedResolutionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingChanged OnSettingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingConfirmed OnSettingConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllSettingsConfirmed OnAllSettingsConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingRequiringEngineRestartConfirmed OnSettingRequiringEngineRestartConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVideoModeChanged OnShowConfirmRevertVideoModePopup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVideoModeChanged OnConfirmVideoMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVideoModeChanged OnRevertVideoMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVideoBenchmarkComplete OnVideoBenchmarkComplete;
    
    URebelGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void VerifyWindowModeAndResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayInGameEULA() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    bool SetSettingAsDifficulty(ERebelSetting InSetting, ERebelGameDifficulty InDifficulty, ERebelSettingChangeMode InSettingChangeMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool SetSettingAsBool(ERebelSetting InSetting, bool InSettingBool, ERebelSettingChangeMode InSettingChangeMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool SetSetting(ERebelSetting InSetting, float InSettingValue, ERebelSettingChangeMode InSettingChangeMode);
    
    UFUNCTION(BlueprintCallable)
    void RevertWindowModeAndResolution();
    
    UFUNCTION(BlueprintCallable)
    bool ResetUnconfirmedSettingsFromSet(const TSet<ERebelSetting>& InSettings);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ResetUnconfirmedSettings();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ResetUnconfirmedSetting(ERebelSetting InSetting);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ResetSettingToDefault(ERebelSetting InSetting, bool bInSave);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ResetSettingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    bool ResetSettingsFromSetToDefault(const TSet<ERebelSetting>& InSettings);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ResetSettingGroupToDefault(ERebelSettingGroup InSettingGroup);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestApplyDefaultVideoPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RefreshSupportedResolutions() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    bool PreviewVideoPreset(ERebelQuality InQuality);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool PreviewDifficultyPreset(ERebelGameDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindowModeResolutionChangeAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingValid(ERebelSetting InSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingUnconfirmed(ERebelSetting InSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingSetToDefault(ERebelSetting InSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingOverrideActive(ERebelSetting InSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingFromSettingGroup(ERebelSetting InSetting, ERebelSettingGroup InSettingGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSavingSettingsSupported() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResolutionSupported(const FIntPoint& InResolution) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQualityValid(ERebelQuality InQuality) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstLaunch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCVarOverrideActive(const FString& InCVar) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnconfirmedSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelUpscalerType GetUpscalerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSupportedResolutions(TArray<FIntPoint>& OutSupportedResolutions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupportedResolutionIndex(const FIntPoint& InResolution) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ERebelLanguage> GetSupportedLanguages(ERebelLanguageType InLanguageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingsForSettingGroup(ERebelSettingGroup InSettingGroup, TArray<ERebelSetting>& OutSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetSettingAsQuality(ERebelSetting InSetting, ERebelQuality& OutQuality, bool bInUseBaseSetting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetSettingAsLanguage(ERebelSetting InSetting, ERebelLanguage& OutLanguage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetSettingAsInt(ERebelSetting InSetting, int32& OutSettingInt) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetSettingAsDifficulty(ERebelSetting InSetting, ERebelGameDifficulty& OutDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetSettingAsBool(ERebelSetting InSetting, bool& OutSettingBool) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetSetting(ERebelSetting InSetting, float& OutSettingValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetQualitySettingCVarValue(ERebelSetting InSetting, UPARAM(Ref) float& OutCVarValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetQualitySettingCVarName(ERebelSetting InSetting, UPARAM(Ref) FString& OutCVarName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLanguageISOCode(ERebelLanguage InLanguage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetInitialSetting(ERebelSetting InSetting, float& OutSettingValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetDefaultSetting(ERebelSetting InSetting, float& OutSettingValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentVideoPreset(ERebelQuality& OutQuality, bool bInAcceptUnconfirmed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelLanguage GetCurrentLanguage(ERebelLanguageType InLanguageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentDifficultyPreset(ERebelGameDifficulty& OutDifficulty, bool bInAcceptUnconfirmed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    bool GetBaseSetting(ERebelSetting InSetting, float& OutSettingValue, bool bIncludeUnconfirmed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelGameUserSettings* Get();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSettingRequireEngineApply(ERebelSetting InSetting) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeactivateSettingOverride(ERebelSetting InSetting);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeactivateCVarOverride(const FString& InCVar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeactivateAllSettingOverrides();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeactivateAllCVarOverrides();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConvertQualityToFloat(ERebelQuality InQuality, float& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConvertFloatToQuality(float InValue, ERebelQuality& OutQuality) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConvertFloatToDifficulty(float InValue, ERebelGameDifficulty& OutValue);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmWindowModeAndResolution();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ConfirmSettings(bool bInSave);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ConfirmSettingGroup(ERebelSettingGroup InSettingGroup, bool bInSave);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ConfirmSetting(ERebelSetting InSetting, bool bInSave);
    
    UFUNCTION(BlueprintCallable)
    void CinematicModeStarted();
    
    UFUNCTION(BlueprintCallable)
    void CinematicModeFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyWindowModeAndResolution();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ApplyVideoPreset(ERebelQuality InQuality);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateSettingOverride(ERebelSetting InSetting, float InSettingValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateCVarOverride(const FString& InCVar, float InCVarOverrideValue);
    
};

