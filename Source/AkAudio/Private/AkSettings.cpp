#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 4;
    this->bSoundBanksTransfered = true;
    this->bAssetsMigrated = true;
    this->bProjectMigrated = true;
    this->bAutoConnectToWAAPI = false;
    this->DefaultOcclusionCollisionChannel = ECC_Visibility;
    this->DefaultFitToGeometryCollisionChannel = ECC_WorldStatic;
    this->DefaultTransmissionLoss = 0.00f;
    this->GlobalDecayAbsorption = 0.50f;
    this->SplitSwitchContainerMedia = false;
    this->SplitMediaPerFolder = false;
    this->UseEventBasedPackaging = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    this->DefaultAssetCreationPath = TEXT("/Game/Audio/AK_Events");
    this->AudioRouting = EAkUnrealAudioRouting::EnableWwiseOnly;
    this->bWwiseSoundEngineEnabled = true;
    this->bWwiseAudioLinkEnabled = false;
    this->bAkAudioMixerEnabled = false;
    this->DefaultListenerScalingFactor = 1.00f;
    this->SuspendAudioDuringFocusLoss = false;
    this->RenderDuringFocusLoss = false;
    this->AskedToUseNewAssetManagement = false;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = true;
    this->FixupRedirectorsDuringMigration = false;
    this->GeometrySurfacePropertiesKeepAlive = NULL;
}


