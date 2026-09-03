#include "DogwoodTextStyle.h"

UDogwoodTextStyle::UDogwoodTextStyle() {
    this->EWeight = EFontWeight::Regular;
    this->ESize = EFontSize::Small;
    this->EColor = EFontColor::White;
    this->bOverrideDropShadow = false;
    this->bShowDropShadow = false;
    this->OutlineWidth = 0;
    this->TintType = ETintType::None;
}


