#include "QuestNodeUnlockCraftingRecipe.h"

UQuestNodeUnlockCraftingRecipe::UQuestNodeUnlockCraftingRecipe() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->ForItem = NULL;
}


