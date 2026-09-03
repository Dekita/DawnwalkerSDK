#include "QuestNodeCharacterDevelopmentManager.h"

UQuestNodeCharacterDevelopmentManager::UQuestNodeCharacterDevelopmentManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifyUseDemoActiveAbilities = false;
    this->bIncreasePlayerLevel = false;
    this->bOverrideTraitPointsAmount = false;
    this->bUnlockSkills = false;
    this->bUnblockSkills = false;
    this->bUnhideSkillsDescription = false;
    this->bModifyDayPhaseChangeRewardsLocked = false;
    this->bModifyEnabledTrees = false;
    this->bModifyCombatAbilitiesTreeEnabled = false;
    this->bModifyVampireAbilitiesTreeEnabled = false;
    this->bModifyMagicAbilitiesTreeEnabled = false;
    this->bModifyEquippedAbilities = false;
    this->bModifyVampireMutationEnabled = false;
    this->bModifyHumanActiveAbilities = false;
    this->bModifyVampireActiveAbilities = false;
    this->bUseDemoActiveAbilities = false;
    this->TargetPlayerLevel = 1;
    this->bDontAddTraitPoints = false;
    this->TraitPointsAmount = 0;
    this->bDayPhaseChangeRewardsLocked = false;
    this->bHuman = true;
    this->bVampire = true;
    this->bShared = true;
    this->bCombatFocus = true;
    this->bCombatAbilities = true;
    this->bVampireAbilities = true;
    this->bMagicAbilities = true;
    this->bAllowHumanAbilities = true;
    this->bAllowVampireAbilities = true;
    this->bVampireMutationEnabled = true;
}


