#include "DawnwalkerTransportSubsystem.h"

UDawnwalkerTransportSubsystem::UDawnwalkerTransportSubsystem() {
    this->RoadsSubsystemInterface = NULL;
    this->MoveTargetSubsystemInterface = NULL;
}

FOnTransportUnregistered UDawnwalkerTransportSubsystem::GetOnTransportUnregistered() {
    return {};
}

FOnTransportRegistered UDawnwalkerTransportSubsystem::GetOnTransportRegistered() {
    return {};
}

void UDawnwalkerTransportSubsystem::BP_DestroyTransport(ADawnwalkerTransportActor* TransportActor) {
}

void UDawnwalkerTransportSubsystem::BP_CreateTransport(ADawnwalkerTransportActor* TransportActor) {
}


