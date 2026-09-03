#include "RebelHLTreeConditionBase.h"

FRebelHLTreeConditionBase::FRebelHLTreeConditionBase() {
    this->Operand = ERebelHLTreeConditionOperand::Copy;
    this->DeltaIndent = 0;
    this->EvaluationMode = ERebelHLTreeConditionEvaluationMode::Evaluated;
}

