#include "DogwoodStatsEditorSettings.h"

UDogwoodStatsEditorSettings::UDogwoodStatsEditorSettings() {
    this->DisableProficiencyPenaltiesLocally = false;
    this->EachAttackShouldBeInstantKill = false;
    this->PrintCombatDamageStats = false;
    this->PrintStaminaRegenerationStats = false;
    this->PrintStaminaCostStats = false;
    this->PrintBloodRegenerationStats = false;
    this->PrintBloodRestorationStats = false;
    this->PrintActionSlotRegenerationStats = false;
    this->bPrintActiveAbilitiesCooldownStats = false;
    this->bPrintActiveEffectsProlongStats = false;
}


