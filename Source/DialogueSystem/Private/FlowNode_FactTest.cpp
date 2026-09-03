#include "FlowNode_FactTest.h"

UFlowNode_FactTest::UFlowNode_FactTest() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bInverseCondition = false;
}


