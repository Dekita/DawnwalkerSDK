#include "DawnwalkerGameModeBase.h"

ADawnwalkerGameModeBase::ADawnwalkerGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForcedFadeWidget = NULL;
}

void ADawnwalkerGameModeBase::Test() {
}

void ADawnwalkerGameModeBase::RegisterFastTravelMarker(const FString& Identifier, AFastTravelMarker* Marker) {
}

AFastTravelMarker* ADawnwalkerGameModeBase::GetFastTravelMarker(const FString& Identifier) {
    return NULL;
}

TArray<AFastTravelMarker*> ADawnwalkerGameModeBase::GetAllFastTravelMarkers() {
    return TArray<AFastTravelMarker*>();
}

void ADawnwalkerGameModeBase::FadeOutForcedFadeWidget() {
}


