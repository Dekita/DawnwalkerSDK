#include "RebelAILogicNodeDecorator_Coroutine.h"

FRebelAILogicNodeDecorator_Coroutine::FRebelAILogicNodeDecorator_Coroutine() {
    this->bMain = false;
    this->CoroutineScope = ERebelAILogicTree_CoroutineScope::Service;
}

