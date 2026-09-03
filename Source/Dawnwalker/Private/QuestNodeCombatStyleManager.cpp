#include "QuestNodeCombatStyleManager.h"

UQuestNodeCombatStyleManager::UQuestNodeCombatStyleManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bAffectHumanForm = false;
    this->bPreferUnarmedCombatInHumanForm = false;
    this->bAffectVampireForm = false;
    this->bPreferUnarmedCombatInVampireForm = false;
    this->bUseFistsInVampireForm = false;
    this->bDisableChangingCombatStyle = false;
}


