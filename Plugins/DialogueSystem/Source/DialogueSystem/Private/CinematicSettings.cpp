#include "CinematicSettings.h"

UCinematicSettings::UCinematicSettings() {
    this->bUseBaseDialogueClass = true;
    this->PlayerCharacterName = FText::FromString(TEXT("Coen"));
    this->DefaultVoiceLanguage = TEXT("en");
    this->CurrentVoiceLanguage = TEXT("en");
    this->SupportedVoiceLanguages.AddDefaulted(6);
    this->bSupportLanguageChunks = false;
    this->MaxDialogueLineLength = 999;
    this->DevCinematicLineDelimiters.AddDefaulted(1);
    this->AnimationSlotNameEyes = TEXT("Eyes");
    this->SlotNameHead = TEXT("Head");
    this->SlotNamePelvis = TEXT("Pelvis");
    this->LookAtEaseInCurveType = EMovieSceneBuiltInEasing::SinInOut;
    this->LookAtEaseOutCurveType = EMovieSceneBuiltInEasing::SinInOut;
    this->LookAtEyeCurveOffset = 0.20f;
    this->DefaultMovieSets.AddDefaulted(3);
    this->MaxPlayerTeleportDistance = 400.00f;
    this->RestrictedAreaHideChannels.AddDefaulted(2);
    this->LoosePriorityDistance = 1000.00f;
    this->LipSyncDirectoryPath = TEXT("/Game/MetaHumans/Jali_lipsync");
    this->DefaultTimedChoiceDuration = 10.00f;
    this->FullscreenChoiceInputActions.AddDefaulted(4);
    this->SpokenTextPreviewLength = 10;
    this->PostDialogueCameraPitch = -20.00f;
    this->InvalidVoiceSetTypeInputName = TEXT("InvalidVoiceSetType");
    this->AnimationTickBuckets = 0;
    this->SpeakerCapsuleRadius = 42.00f;
    this->SpeakerCapsuleHalfHeight = 96.00f;
    this->CutsceneStateGroupName = TEXT("ST_Cinematic_Mix");
    this->AutoFocusDeadZoneRadius = 3.00f;
    this->AutoFocusDeadZoneRadiusExponent = 1.10f;
    this->AutoFocusSmoothingTime = 1.00f;
    this->AutoFocusInterpolationRadiusMultiplier = 1.50f;
    this->AutoFocusSnapRadiusMultiplier = 2.00f;
}

bool UCinematicSettings::SetGameVoiceLanguageToDefault() {
    return false;
}

bool UCinematicSettings::SetGameVoiceLanguage(const FName& CultureName) {
    return false;
}

UDataTable* UCinematicSettings::GetVoiceSetTypeDescriptions() const {
    return NULL;
}

FName UCinematicSettings::GetGameVoiceLanguage() const {
    return NAME_None;
}

UDataTable* UCinematicSettings::GetFullscreenChoiceSlots() const {
    return NULL;
}

UCinematicSettings* UCinematicSettings::Get() {
    return NULL;
}


