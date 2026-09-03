#include "AkSettingsPerUser.h"

UAkSettingsPerUser::UAkSettingsPerUser() {
    this->ProjectDatabaseLoadMode = EWwiseProjectDatabaseLoadMode::Synchronous;
    this->WaapiIPAddress = TEXT("127.0.0.1");
    this->WaapiPort = 8080;
    this->bAutoConnectToWAAPI = true;
    this->AutoSyncSelection = true;
    this->WaapiCallsTimeout = 500;
    this->WaapiTranslatorTimeout = 0;
    this->SuppressGeneratedSoundBanksPathWarnings = false;
    this->SoundDataGenerationSkipLanguage = false;
    this->VerboseSoundBankGeneration = false;
    this->AskForWwiseAssetReload = false;
}


