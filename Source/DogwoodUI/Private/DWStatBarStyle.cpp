#include "DWStatBarStyle.h"

UDWStatBarStyle::UDWStatBarStyle() {
    this->BarHeight = 56.00f;
    this->bUseCustomBackgroundTexture = false;
    this->Background = NULL;
    this->bUseDirtMask = false;
    this->DirtMask = NULL;
    this->Fill = NULL;
    this->Tip = NULL;
    this->bUseBackgroundBarForSecondAttribute = false;
    this->bShowDelayedDecrease = false;
    this->DecreaseDelayTime = 0.30f;
    this->DecreaseDelayThreshold = 0.10f;
}


