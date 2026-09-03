#include "TraitAsset.h"

UTraitAsset::UTraitAsset() {
    this->SkillTree = ECharacterDevelopmentMode::None;
    this->DescriptionHidden = false;
    this->UnlockWithQuest = false;
    this->SkillType = ECharacterDevelopmentAbilityType::None;
    this->Tier = 1;
    this->LevelsDescriptionHidden = false;
    this->CombatFocusAbility = NULL;
    this->CombatFocusAbilityDEMO = NULL;
    this->MaxTraitLevel = 1;
    this->AlwaysEquippedWithoutSlotCost = false;
    this->DisplayedWorkingPhase = ETraitWorkingPhase::None;
}

bool UTraitAsset::IsUltimateTier() const {
    return false;
}

FText UTraitAsset::GetSkillDescription() const {
    return FText::GetEmpty();
}

FText UTraitAsset::GetLevelDescription(const FText& SourceDescription, const int32 Level) const {
    return FText::GetEmpty();
}

FTraitLevel UTraitAsset::GetLevelData(const int32 Level) const {
    return FTraitLevel{};
}


