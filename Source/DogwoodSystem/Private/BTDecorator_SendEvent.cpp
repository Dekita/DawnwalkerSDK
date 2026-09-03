#include "BTDecorator_SendEvent.h"

UBTDecorator_SendEvent::UBTDecorator_SendEvent() {
    this->NodeName = TEXT("Send Event");
    this->EventClass = NULL;
    this->Event = NULL;
    this->Mode = ESendEventDecoratorMode::None;
}


