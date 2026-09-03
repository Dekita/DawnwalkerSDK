#include "CharacterBuff.h"

FCharacterBuff::FCharacterBuff() {
    this->PersistentComponent = NULL;
    this->bIsDebuff = false;
    this->bShowWarningAnimation = false;
    this->CustomTimeProvider = NULL;
}

