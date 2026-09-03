#include "PostEventData.h"

FPostEventData::FPostEventData() {
    this->bStopWhenAttachedToDestroyed = false;
    this->IsPersistent = false;
    this->RemovesOtherPersistent = false;
}

