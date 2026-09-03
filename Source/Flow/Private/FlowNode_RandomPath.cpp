#include "FlowNode_RandomPath.h"

UFlowNode_RandomPath::UFlowNode_RandomPath() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->bNoRepetition = true;
}


