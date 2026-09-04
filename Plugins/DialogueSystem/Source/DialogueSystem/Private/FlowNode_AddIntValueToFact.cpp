#include "FlowNode_AddIntValueToFact.h"

UFlowNode_AddIntValueToFact::UFlowNode_AddIntValueToFact() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ValueToAdd = 0;
}


