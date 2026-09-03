#include "FocusableSoundSource.h"

UFocusableSoundSource::UFocusableSoundSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEverMoves = true;
    this->EnterFocusSoundEvent = NULL;
    this->LeaveFocusSoundEvent = NULL;
    this->bPlayInVampireForm = false;
    this->bPlayInHumanForm = false;
}


