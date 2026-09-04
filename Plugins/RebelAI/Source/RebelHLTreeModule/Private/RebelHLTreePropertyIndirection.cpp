#include "RebelHLTreePropertyIndirection.h"

FRebelHLTreePropertyIndirection::FRebelHLTreePropertyIndirection() {
    this->Offset = 0;
    this->Type = ERebelHLTreePropertyAccessType::Offset;
    this->InstanceStruct = NULL;
}

