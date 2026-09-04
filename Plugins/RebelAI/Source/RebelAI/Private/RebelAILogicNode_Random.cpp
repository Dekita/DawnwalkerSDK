#include "RebelAILogicNode_Random.h"

FRebelAILogicNode_Random::FRebelAILogicNode_Random() {
    this->InstanceDataScope = ERebelAILogicTree_InstanceDataScope::StackFrame;
    this->Algorithm = ERebelAILogicNode_Random_Algorithm::Default;
}

