#include "HumanoidNPCDefinition.h"

UHumanoidNPCDefinition::UHumanoidNPCDefinition() {
    this->bRandomizeAppearance = false;
    this->Appearance = NULL;
    this->RandomizedAppearanceTable = NULL;
    this->bIgnoreRandomizedAppearanceVoiceTag = false;
    this->bIgnoreAppearanceMeshQualityLevel = false;
    this->bEnableOneLinerInteraction = true;
    this->bShouldHaveWeaponAtBelt = true;
}


