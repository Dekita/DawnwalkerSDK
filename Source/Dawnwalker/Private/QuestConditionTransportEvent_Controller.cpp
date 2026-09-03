#include "QuestConditionTransportEvent_Controller.h"

UQuestConditionTransportEvent_Controller::UQuestConditionTransportEvent_Controller() {
    this->ObservedTransport = NULL;
}

void UQuestConditionTransportEvent_Controller::OnUnregisterEvent(FGuid ID) {
}

void UQuestConditionTransportEvent_Controller::OnRegisterEvent(FGuid ID, ADawnwalkerTransportActor* Transport) {
}

void UQuestConditionTransportEvent_Controller::OnEvent() {
}


