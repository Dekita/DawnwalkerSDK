#include "DialogueLevelSequenceNodeBase.h"

UDialogueLevelSequenceNodeBase::UDialogueLevelSequenceNodeBase() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bIsFirstLevelSequenceNode = false;
    this->bIsLastLevelSequenceNode = false;
}


