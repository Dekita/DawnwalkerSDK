#include "FlowNode_Start.h"

UFlowNode_Start::UFlowNode_Start() {
    this->AllowedSignalModes.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
    this->DefaultPinName = TEXT("In");
}


