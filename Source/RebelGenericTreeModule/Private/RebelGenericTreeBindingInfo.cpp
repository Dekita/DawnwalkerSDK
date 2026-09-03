#include "RebelGenericTreeBindingInfo.h"

FRebelGenericTreeBindingInfo::FRebelGenericTreeBindingInfo() {
    this->Type = ERebelGenericTreeBindingType::Alias;
    this->Behaviour = ERebelGenericTreeBindingBehaviour::Replace;
    this->SourceIndex = 0;
}

