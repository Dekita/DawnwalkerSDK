#include "RebelAIReactionCondition_RelationCheck.h"

FRebelAIReactionCondition_RelationCheck::FRebelAIReactionCondition_RelationCheck() {
    this->bInvert = false;
    this->Checker = ERebelAIReactionCondition_CheckTarget::Owner;
    this->CheckTarget = ERebelAIReactionCondition_CheckTarget::Owner;
    this->Attitude = ERebelAIAttitude::NotSet;
}

