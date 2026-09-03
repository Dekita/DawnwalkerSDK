#include "RebelInputRow.h"

FRebelInputRow::FRebelInputRow() {
    this->bIsMandatory = false;
    this->DisplayGroup = ERebelInputDisplayGroup::None;
    this->ConflictGroup = ERebelInputConflictGroup::General;
    this->DisplayPriority = 0;
    this->InputType = ERebelInputType::None;
}

