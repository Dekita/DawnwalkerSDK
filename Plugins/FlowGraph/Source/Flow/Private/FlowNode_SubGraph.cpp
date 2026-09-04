#include "FlowNode_SubGraph.h"

UFlowNode_SubGraph::UFlowNode_SubGraph() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bCanInstanceIdenticalAsset = false;
}


