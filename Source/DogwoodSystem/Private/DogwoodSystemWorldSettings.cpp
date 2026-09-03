#include "DogwoodSystemWorldSettings.h"

ADogwoodSystemWorldSettings::ADogwoodSystemWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameTimeDilation = 1.00f;
    this->bIsGameWorld = true;
    this->bAllowAutomaticSavegames = false;
    this->RegionMapConfig = NULL;
    this->RegionConfig = NULL;
}


