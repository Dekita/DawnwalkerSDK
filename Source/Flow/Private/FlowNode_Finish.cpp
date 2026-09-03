#include "FlowNode_Finish.h"

UFlowNode_Finish::UFlowNode_Finish() {
    this->AllowedSignalModes.AddDefaulted(2);
    this->InputPins.AddDefaulted(1);
    this->DefaultPinName = TEXT("Completed");
}


