#include "AudioDoor.h"

UAudioDoor::UAudioDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DoorClosedTransmission = 1.00f;
}

void UAudioDoor::OnDoorStartedOpening(bool WasSystemicallyOpened) const {
}

void UAudioDoor::OnDoorStartedClosing(bool WasSystemicallyClosed) const {
}

void UAudioDoor::OnDoorOpenAmountChanged(float Value) {
}


