#include "AnimNotify_SkinnedDecal.h"

UAnimNotify_SkinnedDecal::UAnimNotify_SkinnedDecal() {
    this->DecalSize = 50.00f;
    this->MinDecalIndex = 0;
    this->MaxDecalIndex = 3;
    this->bNeverFadeAway = true;
    this->bIsBloodAndShouldBeCensoredInSomeRegions = true;
}


