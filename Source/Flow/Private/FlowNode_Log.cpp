#include "FlowNode_Log.h"

UFlowNode_Log::UFlowNode_Log() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Message = TEXT("Log!");
    this->Verbosity = EFlowLogVerbosity::Warning;
    this->bPrintToScreen = true;
    this->duration = 5.00f;
}


