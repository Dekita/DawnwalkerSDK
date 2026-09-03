#include "QuestNodeInspectObject.h"

UQuestNodeInspectObject::UQuestNodeInspectObject() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(3);
    this->bIsCancellable = true;
}


