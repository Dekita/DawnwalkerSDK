#include "FocusableSoundSource.h"

UFocusableSoundSource::UFocusableSoundSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEverMoves = true;
    this->bPlayInVampireForm = false;
    this->bPlayInHumanForm = false;
}


