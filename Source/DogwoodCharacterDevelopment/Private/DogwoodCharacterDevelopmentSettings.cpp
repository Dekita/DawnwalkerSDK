#include "DogwoodCharacterDevelopmentSettings.h"

UDogwoodCharacterDevelopmentSettings::UDogwoodCharacterDevelopmentSettings() {
    this->NetImGuiSwordAbilities.AddDefaulted(7);
    this->NetImGuiSpellAbilities.AddDefaulted(8);
    this->NetImGuiVampireAbilities.AddDefaulted(10);
    this->LevelCap = 50;
    this->bPlayVideosForPassiveAbilities = true;
    this->UltimateTier = 4;
}

void UDogwoodCharacterDevelopmentSettings::SetPlayerLevelOverride(int32 Value) {
}

int32 UDogwoodCharacterDevelopmentSettings::GetPlayerLevelOverride() {
    return 0;
}


