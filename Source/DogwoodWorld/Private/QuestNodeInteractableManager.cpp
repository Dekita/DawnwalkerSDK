#include "QuestNodeInteractableManager.h"

UQuestNodeInteractableManager::UQuestNodeInteractableManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifyInteractableState = false;
    this->InteractableState = EInteractableState::None;
    this->FocusableObjectCategory = EFocusableObjectCategory::Default;
    this->bResetQuestInteractionCounter = false;
}


