#include "QuestNodeFocusableManager.h"

UQuestNodeFocusableManager::UQuestNodeFocusableManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifyHighlightType = false;
    this->bModifyHighlightCategory = false;
    this->FocusHighlightType = EFocusHighlightType::Disabled;
    this->FocusableObjectCategory = EFocusableObjectCategory::Default;
}


