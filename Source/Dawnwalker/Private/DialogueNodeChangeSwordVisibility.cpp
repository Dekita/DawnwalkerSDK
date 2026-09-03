#include "DialogueNodeChangeSwordVisibility.h"

UDialogueNodeChangeSwordVisibility::UDialogueNodeChangeSwordVisibility() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bShow = false;
}


