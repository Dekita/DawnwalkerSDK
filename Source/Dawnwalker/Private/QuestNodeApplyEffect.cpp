#include "QuestNodeApplyEffect.h"

UQuestNodeApplyEffect::UQuestNodeApplyEffect() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->EffectToApply = SetVampireTraversalForDemo;
    this->Remove = false;
}


