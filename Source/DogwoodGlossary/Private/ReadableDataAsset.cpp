#include "ReadableDataAsset.h"

UReadableDataAsset::UReadableDataAsset() {
    this->AddToGlossaryWhenViewed = true;
    this->Category = EReadableCategory::Letter;
    this->orientation = EReadableOrientationType::Vertical;
    this->Background = EReadableBackgroundType::Letter_01;
    this->bShowTitle = true;
    this->Seal = EReadableSealType::None;
    this->SealAlignment = EReadableSectionAlignment::Right;
    this->XpReward = 0;
}


