#include "AudioDoor.h"

UAudioDoor::UAudioDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OpenAudioEvent = NULL;
    this->CloseAudioEvent = NULL;
    this->DoorPortal = NULL;
    this->DoorClosedTransmission = 1.00f;
}

void UAudioDoor::OnDoorStartedOpening(bool WasSystemicallyOpened) const {
}

void UAudioDoor::OnDoorStartedClosing(bool WasSystemicallyClosed) const {
}

void UAudioDoor::OnDoorOpenAmountChanged(float Value) {
}


