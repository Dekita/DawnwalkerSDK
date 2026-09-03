#include "DialogueNodeChangeAppearance.h"

UDialogueNodeChangeAppearance::UDialogueNodeChangeAppearance() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->AppearanceState = NULL;
}


