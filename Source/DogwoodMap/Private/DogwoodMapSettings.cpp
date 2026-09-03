#include "DogwoodMapSettings.h"

UDogwoodMapSettings::UDogwoodMapSettings() {
    this->CompassRangeForQuestStartMappins = 10000.00f;
    this->FastTravelPointUnlockDistance = 1000.00f;
    this->UnknownStateDetectionDistance = 10000.00f;
    this->MappinVerticalOverlayDetectionDistance = 250.00f;
    this->bStartWithAllFastTravelPointsUnlocked = false;
    this->UnknownMappinText = FText::FromString(TEXT("Unknown"));
    this->UnknownFastTravelMappinName = FText::FromString(TEXT("Undiscovered Shrine"));
    this->MappinsInvisibleByDefault = true;
    this->CompletedMappinMinZoom = 0.40f;
    this->UnknownMappinMinZoom = 0.30f;
    this->UnknownMappinMaxZoom = 1.00f;
    this->PlayerPositionMappinText = FText::FromString(TEXT("Current Position"));
    this->UserMarkerMappinText = FText::FromString(TEXT("Custom Marker"));
    this->QuestStartMappinText = FText::FromString(TEXT("Available Quest"));
    this->MappinFilters.AddDefaulted(2);
    this->MinZoom = 1.55f;
    this->MaxZoom = 10.00f;
    this->MinVirtualZoom = 0.30f;
    this->TrackedMappinCancellingDistance = 400.00f;
}

UDogwoodMapSettings* UDogwoodMapSettings::GetDogwoodMapSettings() {
    return NULL;
}


