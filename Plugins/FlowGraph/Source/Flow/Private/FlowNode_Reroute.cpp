#include "FlowNode_Reroute.h"

UFlowNode_Reroute::UFlowNode_Reroute() {
    this->AllowedSignalModes.AddDefaulted(2);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}


