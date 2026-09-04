#include "RebelAILogicNodeDecorator_Counter.h"

FRebelAILogicNodeDecorator_Counter::FRebelAILogicNodeDecorator_Counter() {
    this->CounterIdentificationMode = ERebelAIIdentificationMode::Name;
    this->AddedValue = 0;
    this->CounterApplyMode = ERebelAILogicNodeDecorator_Counter_CounterApplyMode::None;
    this->bGlobal = false;
}

