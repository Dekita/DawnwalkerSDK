#include "DialogueNodeLaunchShop.h"

UDialogueNodeLaunchShop::UDialogueNodeLaunchShop() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bUseSavedChoiceData = false;
    this->BoundMerchantInventory = NULL;
    this->BoundHUD = NULL;
}


