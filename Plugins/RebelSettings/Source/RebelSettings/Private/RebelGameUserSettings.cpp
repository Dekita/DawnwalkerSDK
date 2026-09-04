#include "RebelGameUserSettings.h"

URebelGameUserSettings::URebelGameUserSettings() {
    this->bUseVSync = true;
    this->LastCPUBenchmarkSteps.AddDefaulted(2);
    this->LastGPUBenchmarkSteps.AddDefaulted(7);
    this->bWasInitFirst = false;
    this->SettingsSave = NULL;
    this->SettingsSaveSlotName = TEXT("RebelSettings");
    this->FramegenSettings = NULL;
}

void URebelGameUserSettings::VerifyWindowModeAndResolution() {
}

bool URebelGameUserSettings::ShouldDisplayInGameEULA() const {
    return false;
}

bool URebelGameUserSettings::SetSettingAsDifficulty(ERebelSetting InSetting, ERebelGameDifficulty InDifficulty, ERebelSettingChangeMode InSettingChangeMode) {
    return false;
}

bool URebelGameUserSettings::SetSettingAsBool(ERebelSetting InSetting, bool InSettingBool, ERebelSettingChangeMode InSettingChangeMode) {
    return false;
}

bool URebelGameUserSettings::SetSetting(ERebelSetting InSetting, float InSettingValue, ERebelSettingChangeMode InSettingChangeMode) {
    return false;
}

void URebelGameUserSettings::RevertWindowModeAndResolution() {
}

bool URebelGameUserSettings::ResetUnconfirmedSettingsFromSet(const TSet<ERebelSetting>& InSettings) {
    return false;
}

bool URebelGameUserSettings::ResetUnconfirmedSettings() {
    return false;
}

bool URebelGameUserSettings::ResetUnconfirmedSetting(ERebelSetting InSetting) {
    return false;
}

bool URebelGameUserSettings::ResetSettingToDefault(ERebelSetting InSetting, bool bInSave) {
    return false;
}

bool URebelGameUserSettings::ResetSettingsToDefault() {
    return false;
}

bool URebelGameUserSettings::ResetSettingsFromSetToDefault(const TSet<ERebelSetting>& InSettings) {
    return false;
}

bool URebelGameUserSettings::ResetSettingGroupToDefault(ERebelSettingGroup InSettingGroup) {
    return false;
}

void URebelGameUserSettings::RequestApplyDefaultVideoPreset() {
}

void URebelGameUserSettings::RefreshSupportedResolutions() const {
}

bool URebelGameUserSettings::PreviewVideoPreset(ERebelQuality InQuality) {
    return false;
}

bool URebelGameUserSettings::PreviewDifficultyPreset(ERebelGameDifficulty InDifficulty) {
    return false;
}

bool URebelGameUserSettings::IsWindowModeResolutionChangeAllowed() const {
    return false;
}

bool URebelGameUserSettings::IsSettingValid(ERebelSetting InSetting) const {
    return false;
}

bool URebelGameUserSettings::IsSettingUnconfirmed(ERebelSetting InSetting) const {
    return false;
}

bool URebelGameUserSettings::IsSettingSetToDefault(ERebelSetting InSetting) const {
    return false;
}

bool URebelGameUserSettings::IsSettingOverrideActive(ERebelSetting InSetting) const {
    return false;
}

bool URebelGameUserSettings::IsSettingFromSettingGroup(ERebelSetting InSetting, ERebelSettingGroup InSettingGroup) const {
    return false;
}

bool URebelGameUserSettings::IsSavingSettingsSupported() const {
    return false;
}

bool URebelGameUserSettings::IsResolutionSupported(const FIntPoint& InResolution) const {
    return false;
}

bool URebelGameUserSettings::IsQualityValid(ERebelQuality InQuality) const {
    return false;
}

bool URebelGameUserSettings::IsInitializing() const {
    return false;
}

bool URebelGameUserSettings::IsInitialized() const {
    return false;
}

bool URebelGameUserSettings::IsFirstLaunch() const {
    return false;
}

bool URebelGameUserSettings::IsCVarOverrideActive(const FString& InCVar) const {
    return false;
}

bool URebelGameUserSettings::HasUnconfirmedSettings() const {
    return false;
}

ERebelUpscalerType URebelGameUserSettings::GetUpscalerType() const {
    return ERebelUpscalerType::None;
}

bool URebelGameUserSettings::GetSupportedResolutions(TArray<FIntPoint>& OutSupportedResolutions) const {
    return false;
}

int32 URebelGameUserSettings::GetSupportedResolutionIndex(const FIntPoint& InResolution) const {
    return 0;
}

TArray<ERebelLanguage> URebelGameUserSettings::GetSupportedLanguages(ERebelLanguageType InLanguageType) const {
    return TArray<ERebelLanguage>();
}

void URebelGameUserSettings::GetSettingsForSettingGroup(ERebelSettingGroup InSettingGroup, TArray<ERebelSetting>& OutSettings) {
}

bool URebelGameUserSettings::GetSettingAsQuality(ERebelSetting InSetting, ERebelQuality& OutQuality, bool bInUseBaseSetting) const {
    return false;
}

bool URebelGameUserSettings::GetSettingAsLanguage(ERebelSetting InSetting, ERebelLanguage& OutLanguage) const {
    return false;
}

bool URebelGameUserSettings::GetSettingAsInt(ERebelSetting InSetting, int32& OutSettingInt) const {
    return false;
}

bool URebelGameUserSettings::GetSettingAsDifficulty(ERebelSetting InSetting, ERebelGameDifficulty& OutDifficulty) const {
    return false;
}

bool URebelGameUserSettings::GetSettingAsBool(ERebelSetting InSetting, bool& OutSettingBool) const {
    return false;
}

bool URebelGameUserSettings::GetSetting(ERebelSetting InSetting, float& OutSettingValue) const {
    return false;
}

bool URebelGameUserSettings::GetQualitySettingCVarValue(ERebelSetting InSetting, float& OutCVarValue) const {
    return false;
}

bool URebelGameUserSettings::GetQualitySettingCVarName(ERebelSetting InSetting, FString& OutCVarName) const {
    return false;
}

FString URebelGameUserSettings::GetLanguageISOCode(ERebelLanguage InLanguage) const {
    return TEXT("");
}

bool URebelGameUserSettings::GetInitialSetting(ERebelSetting InSetting, float& OutSettingValue) const {
    return false;
}

bool URebelGameUserSettings::GetDefaultSetting(ERebelSetting InSetting, float& OutSettingValue) const {
    return false;
}

bool URebelGameUserSettings::GetCurrentVideoPreset(ERebelQuality& OutQuality, bool bInAcceptUnconfirmed) const {
    return false;
}

ERebelLanguage URebelGameUserSettings::GetCurrentLanguage(ERebelLanguageType InLanguageType) const {
    return ERebelLanguage::English;
}

bool URebelGameUserSettings::GetCurrentDifficultyPreset(ERebelGameDifficulty& OutDifficulty, bool bInAcceptUnconfirmed) {
    return false;
}

bool URebelGameUserSettings::GetBaseSetting(ERebelSetting InSetting, float& OutSettingValue, bool bIncludeUnconfirmed) const {
    return false;
}

URebelGameUserSettings* URebelGameUserSettings::Get() {
    return NULL;
}

bool URebelGameUserSettings::DoesSettingRequireEngineApply(ERebelSetting InSetting) const {
    return false;
}

void URebelGameUserSettings::DeactivateSettingOverride(ERebelSetting InSetting) {
}

void URebelGameUserSettings::DeactivateCVarOverride(const FString& InCVar) {
}

void URebelGameUserSettings::DeactivateAllSettingOverrides() {
}

void URebelGameUserSettings::DeactivateAllCVarOverrides() {
}

bool URebelGameUserSettings::ConvertQualityToFloat(ERebelQuality InQuality, float& OutValue) const {
    return false;
}

bool URebelGameUserSettings::ConvertFloatToQuality(float InValue, ERebelQuality& OutQuality) const {
    return false;
}

bool URebelGameUserSettings::ConvertFloatToDifficulty(float InValue, ERebelGameDifficulty& OutValue) {
    return false;
}

void URebelGameUserSettings::ConfirmWindowModeAndResolution() {
}

bool URebelGameUserSettings::ConfirmSettings(bool bInSave) {
    return false;
}

bool URebelGameUserSettings::ConfirmSettingGroup(ERebelSettingGroup InSettingGroup, bool bInSave) {
    return false;
}

bool URebelGameUserSettings::ConfirmSetting(ERebelSetting InSetting, bool bInSave) {
    return false;
}

void URebelGameUserSettings::CinematicModeStarted() {
}

void URebelGameUserSettings::CinematicModeFinished() {
}

bool URebelGameUserSettings::ApplyWindowModeAndResolution() {
    return false;
}

bool URebelGameUserSettings::ApplyVideoPreset(ERebelQuality InQuality) {
    return false;
}

void URebelGameUserSettings::ActivateSettingOverride(ERebelSetting InSetting, float InSettingValue) {
}

void URebelGameUserSettings::ActivateCVarOverride(const FString& InCVar, float InCVarOverrideValue) {
}


